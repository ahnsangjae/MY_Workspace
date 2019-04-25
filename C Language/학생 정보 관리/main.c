#include "student.h"

void main()
{		
	int b=1,num,i,m,j=0,count=0;
	struct student data;
	struct student a[10]={0,};
	struct student *current;
	char *namep;
	FILE *fp;

	fp = fopen("학생정보관리.txt", "r+");

	if(fp == NULL)    // 파일이 없을 때
	{
		fp = fopen("학생정보관리.txt","w+");
	}
	else       // 파일이 이미 있을 때
	{
		i=0;
		do
		{
			fgets(a[i].fg,250,fp);		
			i++;
		}while(a[i-1].fg[0] !=0);

		id=0;
		for(m=0;a[m].fg[0] != 0;m++)
		{
			id++;
			data.id = id;
			namep = strtok(a[m].fg, ":");
			strcpy(data.name, namep);
			namep = strtok(NULL, ":");
			strcpy(data.rn,namep);	
			namep = strtok(NULL, ":");
			strcpy(data.ad,namep);
			namep = strtok(NULL, ":");
			strcpy(data.mile,namep);
			data.mil = atoi(data.mile);		// mil이 int형 변수이므로 atoi라는 함수를 이용해 char형 변수 mile을 정수로 변환해줌
			namep = strtok(NULL, ":");	
			strcpy(data.phone,namep);

			if(data.rn[7] == '1' || data.rn[7] == '2')
			{
				data.age = 2017 - 1900 - ((data.rn[0]-48)*10 + (data.rn[1]-48));	
			}
			else if(data.rn[7] == '3' || data.rn[7] == '4')
			{
				data.age = 2017 - 2000 - ((data.rn[0]-48)*10 + (data.rn[1]-48));
			}

			addList(&data);
		}

		current = head;
		while(current != 0)					// fgets로 받으면 맨 마지막 phone은 맨 마지막에 개행을 가진다. 그 개행을 널문자로 바꿔서 다른 변수랑 같게 하기위해.
		{
			for(i=0;current->phone[i]!=0;i++)	
			{
					
			}
				current->phone[i-1] = '\0';
				current = current->next;
		}
	}
	fclose(fp);

	while(b!=0)
	{
		system("cls");		
		printf("학생정보관리\n");
		printf("1.입력\n");
		printf("2.수정\n");
		printf("3.삭제\n");
		printf("4.출력\n");	
		printf("5.정렬\n");
		printf("6.저장\n");
		printf("7.종료\n");
		printf("\n원하는 번호를 입력하세요 : ");
		fflush(stdin);
		scanf("%d", &num);	

		switch(num)
		{
			case 1: 
			ENTER();break;
			case 2:
			CHANGE(&data);break;				// 질문!!! &data를 안넣어도 되지않나? 그냥 함수내에서 student *current 라고 선언하고 쓰면되지 않나?
			case 3:
			DELETE(&data);break;
			case 4:
			PRINT(&data);break;
			case 5:
			ARRAY();break;
			case 6:
			SAVE(&data,fp);break;
			case 7:
			END();break;
			default:
			break;
		}
	}
}		