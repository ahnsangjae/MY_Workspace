#ifndef _ADFGVX_H_
#define _ADFGVX_H_

#include "Turboc.h"

int org_mat[6][6] = { {250, 250, 250, 250, 250, 250}, {250, 250, 250, 250, 250, 250}, {250, 250, 250, 250, 250, 250}, {250, 250, 250, 250, 250, 250}, {250, 250, 250, 250, 250, 250}, {250, 250, 250, 250, 250, 250} };
char *sentence;
char *tmp, *tmp_dec;
char **res, **res_sort;
char *str, *str_sort;
int line, row;
int rem;

void sentence_init();
void patient_alloc();
void init_key();
void decode();
int print_to_file();
void free();

typedef struct {
	char value;
	char a, b;
} coordType;

coordType coord[6][6];

void sentence_init()
{
	char *temp = (char *) malloc(sizeof(char) * 1000);
	int i, j, a, b, cnt=0;
	int m,n;
	int ch1 = 48, ch2 = 97;
	int len;
	char tm;

	printf("평서문을 입력하세요. : ");
	scanf_s("%s", temp, 1000);

	sentence = (char *)malloc(sizeof(char) * (strlen(temp) + 1));
	strcpy_s(sentence, strlen(temp)+1, temp);

	free(temp);

	printf("%s\n", sentence);
	
	/* 행렬에 문자 대입 */
	for (i=0; i<6; i++)
	{
		for (j=0; j<6; j++)
		{
			cnt++;
			if (cnt<=10)
			{
				org_mat[i][j] = ch1;
				ch1++;
			}
			else
			{
				org_mat[i][j] = ch2;
				ch2++;
			}
		}
	}

	/* 랜덤으로 위치 바꾸기 */
	for (cnt = 0; cnt < 100; cnt++)
	{
		i = rand() % 6;
		j = rand() % 6;
		m = rand() % 6;
		n = rand() % 6;
	
		tm = org_mat[i][j];
		org_mat[i][j] = org_mat[m][n];
		org_mat[m][n] = tm;
	}

	/* 출력 */
	for (i = 0; i < 6; i++)
	{
		for (j=0; j<6;j++)
		{
			printf("%c	 ", org_mat[i][j]);
		}

		printf("\n");
	}

	/* 영문 좌표 설정 */
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			coord[i][j].value = org_mat[i][j];

			switch (i) {
			case 0:
				coord[i][j].a = 'a';
				break;
			case 1:
				coord[i][j].a = 'd';
				break;
			case 2:
				coord[i][j].a = 'f';
				break;
			case 3:
				coord[i][j].a = 'g';
				break;
			case 4:
				coord[i][j].a = 'v';
				break;
			case 5:
				coord[i][j].a = 'x';
				break;
			}

			switch (j) {
			case 0:
				coord[i][j].b = 'a';
				break;
			case 1:
				coord[i][j].b = 'd';
				break;
			case 2:
				coord[i][j].b = 'f';
				break;
			case 3:
				coord[i][j].b = 'g';
				break;
			case 4:
				coord[i][j].b = 'v';
				break;
			case 5:
				coord[i][j].b = 'x';
				break;
			}
		}
	}
}

void patient_alloc()
{
	unsigned int i, j, k;

	tmp = (char *)malloc(sizeof(char) * strlen(sentence) * 2 + 1);

	for (k = 0; k < strlen(sentence); k++)	// sentence : tigertigertigertigertiger
	{
		for (i = 0; i < 6; i++)
		{
			for (j = 0; j < 6; j++)
			{
				if (sentence[k] == coord[i][j].value)
				{
					tmp[2 * k] = coord[i][j].a;
					tmp[2 * k + 1] = coord[i][j].b;
				}
			}
		}
	}

	tmp[2 * strlen(sentence)] = 0;

	//printf("tmp의 길이 : %d\n\n", strlen(tmp));

	/* 환자표 출력 */
	for (k = 0; k < strlen(sentence); k++)
	{
		printf("%c%c ", tmp[2 * k], tmp[2 * k + 1]);
	}

	printf("\n\n");
}

void init_key()
{
	char *temp = (char *)malloc(sizeof(char) * 1000);
	int i, j, n;
	int len;
	int cnt;

	printf("암호키를 입력해주세요 : ");
	scanf_s("%s", temp, 1000);

	len = strlen(temp);

	str = (char *)malloc(sizeof(char) * (len + 1));
	str_sort = (char *)malloc(sizeof(char) * (len + 1));
	
	strcpy_s(str, len+1, temp);
	strcpy_s(str_sort, len+1, temp);

	free(temp);

	printf("\n");

#if 0
	/* 중복되는 문자 공백 만들기 */
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (str[i] == str[j])
				str[j] = ' ';
		}
	}

	/* 공백 문자 위치 메꾸기 */
	for (i = 1; i < len; i++)
	{
		if (str[i] == ' ')
		{
			cnt = 1;

			for (j = i + 1; str[j] == ' ' && j < len; j++)	// 연속된 공백 갯수
			{
				cnt++;
			}

			for (j = i; j + cnt < len; j++)	// 땡기기
			{
				str[j] = str[j + cnt];
			}

			for (j = len - cnt; j < len; j++)	// 땡겨지고 남은 뒤에 자리들 0으로 셋팅
			{
				str[j] = 0;
			}
		}
	}

	for (i = 0; str[i] != 0; i++)
	{
		str_sort[i] = str[i];
	}

	str_sort[i] = 0;
#endif

	if (strlen(tmp) % strlen(str) == 0)
		row = strlen(tmp) / strlen(str);
	else if (strlen(tmp) % strlen(str) > 0)
		row = strlen(tmp) / strlen(str) + 1;

	line = strlen(str_sort);

	printf("line : %d, row : %d\n", line, row);

	res = (char **)malloc(sizeof(char *) * line);
	res_sort = (char **)malloc(sizeof(char *) * line);

	for (i = 0; i < line; i++)
	{
		*(res + i) = (char *)malloc(sizeof(char) * row);
		*(res_sort + i) = (char *)malloc(sizeof(char) * row);
	}

	for (i = 0; i < line; i++)	// strlen(str) = 8
	{
		for (j = 0; j < row; j++)	// line = 5
		{
			res[i][j] = tmp[i + (j*line)];
			res_sort[i][j] = tmp[i + (j*line)];
		}
	}

	/* 남는 위치 랜덤 문자로 셋팅 */
	char ran;

	rem = line * row - strlen(tmp);
	for (i = 0; i < rem; i++)
	{
		ran = rand() % 26 + 97;
		res[line - rem + i][row - 1] = ran;
		res_sort[line - rem + i][row - 1] = ran;
	}

	for (i = 0; i < line; i++)
	{
		printf("%c : ", str[i]);

		for (j = 0; j < row; j++)
		{
			printf("%c", res[i][j]);
		}

		printf("\n");
	}

	printf("\n");

	/* 암호키 문자열 오름차순 정렬 */
	int tp;
	int min;
	int t;

	for (i = 0; i < line; i++)
	{
		min = str_sort[i];

		for (j = i + 1; j < line; j++)
		{
			if (min > str_sort[j])
			{
				min = str_sort[j];
				t = j;
			}
		}

		if (str_sort[i] != min)
		{
			tp = str_sort[i];
			str_sort[i] = min;
			str_sort[t] = tp;

			for (j = 0; j < row; j++)
			{
				tp = res_sort[i][j];
				res_sort[i][j] = res_sort[t][j];
				res_sort[t][j] = tp;
			}
		}
	}

	printf("오름차순 정렬 : %s\n\n", str_sort);

	for (i = 0; i < line; i++)
	{
		printf("%c : ", str_sort[i]);

		for (j = 0; j < row; j++)
		{
			printf("%c", res_sort[i][j]);
		}

		printf("\n");
	}

	printf("\n");
}

void decode()
{
	int i, j, k;
	int len;
	char **res_d;	// 환자표 대각화
	char *sentence_dec;

	res_d = (char **)malloc(sizeof(char *) * row);

	for (i = 0; i < row; i++)
		*(res_d + i) = (char *)malloc(sizeof(char) * line);

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < line; j++)
		{
			res_d[i][j] = res[j][i];
			printf("%c	", res_d[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	tmp_dec = (char *)malloc(sizeof(char) * (line*row - rem + 1));
	len = (line * row - rem);	// len = 40

	/* 문제 */
	for (j = 0, k = 0, i = 0; j < len; j++, k++)
	{
		if (k == line)
		{
			i++;
			k = 0;
		}

		tmp_dec[j] = res_d[i][k];
	}

	tmp_dec[40] = 0;

	for (i = 0; i < len / 2; i++)
		printf("%c%c ", tmp_dec[2 * i], tmp_dec[2 * i + 1]);

	printf("\n\n");

	/* 평서문 복호화 과정 */
	sentence_dec = (char *)malloc(sizeof(char) * len / 2 + 1);

	for (i = 0; i < len / 2; i++)
	{
		for (j = 0; j < 6; j++)
		{
			for (k = 0; k < 6; k++)
			{
				if (tmp_dec[2 * i] == coord[j][k].a && tmp_dec[2 * i + 1] == coord[j][k].b)
					sentence_dec[i] = coord[j][k].value;
			}
		}
	}

	sentence_dec[len / 2] = 0;
	printf("복호화된 평서문 : %s\n", sentence_dec);
}

int print_to_file()
{
	errno_t err;
	FILE *fp;

	int i, j;

	err = fopen_s(&fp, "result.txt", "w+");

	if (err == 0)
	{
		puts("파일오픈 성공!\n");
	}
	else
	{
		puts("파일 오픈 실패\n");
		return -1;
	}

	for (i=0; i<line; i++)
	{
		fprintf(fp, "%c : ", str[i]);
		for (j=0; j<row; j++)
		{
			fprintf(fp, "%c ", res[i][j]);
		}
		fputs("\n", fp);
	}
}

void free()
{
	int i;
	free(sentence);
	free(tmp);
	free(str);
	free(str_sort);
	
	for (i = 0; i<line; i++)
		free(*(res + i));
	
	free(res);

	for (i = 0; i < line; i++)
		free(*(res_sort+i));
	
	free(res_sort);
	free(tmp_dec);
}

#endif