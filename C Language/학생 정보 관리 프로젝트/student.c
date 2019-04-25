#include "student.h"

void id_array()											///////////////////id 정렬//////////////////
{
	struct student *current, *current1;
	struct student temp;

	current1 = head;	
	while(current1 != NULL)
	{
		current = head;
		while(current->next != NULL)
		{
			if(current->id > current->next->id)
			{
				temp.id = current->id;
				strcpy(temp.name , current->name);
				strcpy(temp.rn , current->rn);
				strcpy(temp.ad , current->ad);
				temp.mil = current->mil;
				strcpy(temp.phone , current->phone);
				temp.age = current->age;

				current->id = current->next->id;
				strcpy(current->name, current->next->name);
				strcpy(current->rn, current->next->rn);
				strcpy(current->ad, current->next->ad);
				current->mil = current->next->mil;
				strcpy(current->phone, current->next->phone);
				current->age = current->next->age;

				current->next->id = temp.id;
				strcpy(current->next->name , temp.name);
				strcpy(current->next->rn , temp.rn);
				strcpy(current->next->ad, temp.ad);
				current->next->mil= temp.mil;
				strcpy(current->next->phone, temp.phone);	
				current->next->age = temp.age;	
			}	
			current = current->next;
		}		
		current1 = current1->next;
	}

	current = head;
	while(current != NULL)
	{
		printf("1.이름:%s\n",current->name);
		printf("2.주민번호:%s\n",current->rn);
		printf("3.주소:%s\n",current->ad);
		printf("4.마일리지:%d\n",current->mil);
		printf("5.전화번호:%s\n",current->phone);
		
		if(current->rn[7] == '1' || current->rn[7] == '3')
		{
			printf("6.성별:남\n");
		}
		else if(current->rn[7] == '2' || current->rn[7] == '4')
		{
			printf("6.성별:여\n");
		}
		printf("7.나이:%d\n\n",current->age);

		current = current->next;
	}
}

void id_reverse_array()
{
	struct student *current, *current1;
	struct student temp;

	current1 = head;	
	while(current1 != NULL)
	{
		current = head;
		while(current->next != NULL)
		{
			if(current->id < current->next->id)
			{
				temp.id = current->id;
				strcpy(temp.name , current->name);
				strcpy(temp.rn , current->rn);
				strcpy(temp.ad , current->ad);
				temp.mil = current->mil;
				strcpy(temp.phone , current->phone);
				temp.age = current->age;

				current->id = current->next->id;
				strcpy(current->name, current->next->name);
				strcpy(current->rn, current->next->rn);
				strcpy(current->ad, current->next->ad);
				current->mil = current->next->mil;
				strcpy(current->phone, current->next->phone);
				current->age = current->next->age;

				current->next->id = temp.id;
				strcpy(current->next->name , temp.name);
				strcpy(current->next->rn , temp.rn);
				strcpy(current->next->ad, temp.ad);
				current->next->mil= temp.mil;
				strcpy(current->next->phone, temp.phone);	
				current->next->age = temp.age;	
			}	
			current = current->next;
		}		
		current1 = current1->next;
	}

	current = head;
	while(current != NULL)
	{
		printf("1.이름:%s\n",current->name);
		printf("2.주민번호:%s\n",current->rn);
		printf("3.주소:%s\n",current->ad);
		printf("4.마일리지:%d\n",current->mil);
		printf("5.전화번호:%s\n",current->phone);
		
		if(current->rn[7] == '1' || current->rn[7] == '3')
		{
			printf("6.성별:남\n");
		}
		else if(current->rn[7] == '2' || current->rn[7] == '4')
		{
			printf("6.성별:여\n");
		}
		printf("7.나이:%d\n\n",current->age);

		current = current->next;
	}
}

void name_array()											//////////////name 정렬/////////////
{
	struct student *current, *current1;
	struct student temp;

	current1 = head;
	while(current1 != NULL)
	{
		current = head;
		while(current->next != NULL)
		{
			if(strcmp(current->name ,current->next->name)>0)
			{
				temp.id = current->id;
				strcpy(temp.name , current->name);
				strcpy(temp.rn , current->rn);
				strcpy(temp.ad , current->ad);
				temp.mil = current->mil;
				strcpy(temp.phone , current->phone);
				temp.age = current->age;

				current->id = current->next->id;
				strcpy(current->name, current->next->name);
				strcpy(current->rn, current->next->rn);
				strcpy(current->ad, current->next->ad);
				current->mil = current->next->mil;
				strcpy(current->phone, current->next->phone);
				current->age = current->next->age;

				current->next->id = temp.id;
				strcpy(current->next->name , temp.name);
				strcpy(current->next->rn , temp.rn);
				strcpy(current->next->ad, temp.ad);
				current->next->mil= temp.mil;
				strcpy(current->next->phone, temp.phone);	
				current->next->age = temp.age;	
			}	
			current = current->next;
		}
		current1 = current1->next;
	}

	current = head;
	while(current != NULL)
	{
		printf("1.이름:%s\n",current->name);
		printf("2.주민번호:%s\n",current->rn);
		printf("3.주소:%s\n",current->ad);
		printf("4.마일리지:%d\n",current->mil);
		printf("5.전화번호:%s\n",current->phone);
		
		if(current->rn[7] == '1' || current->rn[7] == '3')
		{
			printf("6.성별:남\n");
		}
		else if(current->rn[7] == '2' || current->rn[7] == '4')
		{
			printf("6.성별:여\n");
		}
		printf("7.나이:%d\n\n",current->age);

		current = current->next;
	}
}

void name_reverse_array()
{
	struct student *current, *current1;
	struct student temp;

	current1 = head;
	while(current1 != NULL)
	{
		current = head;
		while(current->next != NULL)
		{
			if(strcmp(current->name ,current->next->name)<0)
			{
				temp.id = current->id;
				strcpy(temp.name , current->name);
				strcpy(temp.rn , current->rn);
				strcpy(temp.ad , current->ad);
				temp.mil = current->mil;
				strcpy(temp.phone , current->phone);
				temp.age = current->age;

				current->id = current->next->id;
				strcpy(current->name, current->next->name);
				strcpy(current->rn, current->next->rn);
				strcpy(current->ad, current->next->ad);
				current->mil = current->next->mil;
				strcpy(current->phone, current->next->phone);
				current->age = current->next->age;

				current->next->id = temp.id;
				strcpy(current->next->name , temp.name);
				strcpy(current->next->rn , temp.rn);
				strcpy(current->next->ad, temp.ad);
				current->next->mil= temp.mil;
				strcpy(current->next->phone, temp.phone);	
				current->next->age = temp.age;	
			}	
			current = current->next;
		}
		current1 = current1->next;
	}

	current = head;
	while(current != NULL)
	{
		printf("1.이름:%s\n",current->name);
		printf("2.주민번호:%s\n",current->rn);
		printf("3.주소:%s\n",current->ad);
		printf("4.마일리지:%d\n",current->mil);
		printf("5.전화번호:%s\n",current->phone);
		
		if(current->rn[7] == '1' || current->rn[7] == '3')
		{
			printf("6.성별:남\n");
		}
		else if(current->rn[7] == '2' || current->rn[7] == '4')
		{
			printf("6.성별:여\n");
		}

		printf("7.나이:%d\n\n",current->age);

		current = current->next;
	}
}

void mil_array()											///////////////////////마일리지 정렬//////////////////////
{
	struct student *current, *current1;
	struct student temp;

	current1 = head;
	while(current1 != NULL)
	{
		current = head;
		while(current->next != NULL)
		{
			if(current->mil > current->next->mil)	
			{
				temp.id = current->id;
				strcpy(temp.name , current->name);
				strcpy(temp.rn , current->rn);
				strcpy(temp.ad , current->ad);
				temp.mil = current->mil;
				strcpy(temp.phone , current->phone);
				temp.age = current->age;

				current->id = current->next->id;
				strcpy(current->name, current->next->name);
				strcpy(current->rn, current->next->rn);
				strcpy(current->ad, current->next->ad);
				current->mil = current->next->mil;
				strcpy(current->phone, current->next->phone);
				current->age = current->next->age;

				current->next->id = temp.id;
				strcpy(current->next->name , temp.name);
				strcpy(current->next->rn , temp.rn);
				strcpy(current->next->ad, temp.ad);
				current->next->mil= temp.mil;
				strcpy(current->next->phone, temp.phone);	
				current->next->age = temp.age;	
			}
			current = current->next;
		}
		current1 = current1->next;
	}
	current = head;
	while(current != NULL)
	{
		printf("1.이름:%s\n",current->name);
		printf("2.주민번호:%s\n",current->rn);
		printf("3.주소:%s\n",current->ad);
		printf("4.마일리지:%d\n",current->mil);
		printf("5.전화번호:%s\n",current->phone);
		
		if(current->rn[7] == '1' || current->rn[7] == '3')
		{
			printf("6.성별:남\n");
		}
		else if(current->rn[7] == '2' || current->rn[7] == '4')
		{
			printf("6.성별:여\n");
		}

		printf("7.나이:%d\n\n",current->age);

		current = current->next;
	}
}

void mil_reverse_array()
{
	struct student *current, *current1;
	struct student temp;

	current1 = head;
	while(current1 != NULL)
	{
		current = head;
		while(current->next != NULL)
		{
			if(current->mil < current->next->mil)
			{
				temp.id = current->id;
				strcpy(temp.name , current->name);
				strcpy(temp.rn , current->rn);
				strcpy(temp.ad , current->ad);
				temp.mil = current->mil;
				strcpy(temp.phone , current->phone);
				temp.age = current->age;

				current->id = current->next->id;
				strcpy(current->name, current->next->name);
				strcpy(current->rn, current->next->rn);
				strcpy(current->ad, current->next->ad);
				current->mil = current->next->mil;
				strcpy(current->phone, current->next->phone);
				current->age = current->next->age;

				current->next->id = temp.id;
				strcpy(current->next->name , temp.name);
				strcpy(current->next->rn , temp.rn);
				strcpy(current->next->ad, temp.ad);
				current->next->mil= temp.mil;
				strcpy(current->next->phone, temp.phone);	
				current->next->age = temp.age;	
			}
			current = current->next;
		}
		current1 = current1->next;
	}
	current = head;
	while(current != NULL)
	{
		printf("1.이름:%s\n",current->name);
		printf("2.주민번호:%s\n",current->rn);
		printf("3.주소:%s\n",current->ad);
		printf("4.마일리지:%d\n",current->mil);
		printf("5.전화번호:%s\n",current->phone);
		
		if(current->rn[7] == '1' || current->rn[7] == '3')
		{
			printf("6.성별:남\n");
		}
		else if(current->rn[7] == '2' || current->rn[7] == '4')
		{
			printf("6.성별:여\n");
		}

		printf("7.나이:%d\n\n",current->age);

		current = current->next;
	}
}


void age_array()									////////////////////나이 정렬///////////////////
{
	struct student *current, *current1;
	struct student temp;

	current1 = head;
	while(current1 != NULL)
	{
		current = head;
		while(current->next != NULL)
		{
			if(current->age > current->next->age)
			{
				temp.id = current->id;
				strcpy(temp.name , current->name);
				strcpy(temp.rn , current->rn);
				strcpy(temp.ad , current->ad);
				temp.mil = current->mil;
				strcpy(temp.phone , current->phone);
				temp.age = current->age;

				current->id = current->next->id;
				strcpy(current->name, current->next->name);
				strcpy(current->rn, current->next->rn);
				strcpy(current->ad, current->next->ad);
				current->mil = current->next->mil;
				strcpy(current->phone, current->next->phone);
				current->age = current->next->age;

				current->next->id = temp.id;
				strcpy(current->next->name , temp.name);
				strcpy(current->next->rn , temp.rn);
				strcpy(current->next->ad, temp.ad);
				current->next->mil= temp.mil;
				strcpy(current->next->phone, temp.phone);	
				current->next->age = temp.age;	
			}
			current = current->next;
		}
		current1 = current1->next;
	}
	current = head;
	while(current != NULL)
	{
		printf("1.이름:%s\n",current->name);
		printf("2.주민번호:%s\n",current->rn);
		printf("3.주소:%s\n",current->ad);
		printf("4.마일리지:%d\n",current->mil);
		printf("5.전화번호:%s\n",current->phone);
		
		if(current->rn[7] == '1' || current->rn[7] == '3')
		{
			printf("6.성별:남\n");
		}
		else if(current->rn[7] == '2' || current->rn[7] == '4')
		{
			printf("6.성별:여\n");
		}

		printf("7.나이:%d\n\n",current->age);

		current = current->next;
	}
}

void age_reverse_array()
{
	struct student *current, *current1;
	struct student temp;

	current1 = head;
	while(current1 != NULL)
	{
		current = head;
		while(current->next != NULL)
		{
			if(current->age < current->next->age)
			{
				temp.id = current->id;
				strcpy(temp.name , current->name);
				strcpy(temp.rn , current->rn);
				strcpy(temp.ad , current->ad);
				temp.mil = current->mil;
				strcpy(temp.phone , current->phone);
				temp.age = current->age;

				current->id = current->next->id;
				strcpy(current->name, current->next->name);
				strcpy(current->rn, current->next->rn);
				strcpy(current->ad, current->next->ad);
				current->mil = current->next->mil;
				strcpy(current->phone, current->next->phone);
				current->age = current->next->age;

				current->next->id = temp.id;
				strcpy(current->next->name , temp.name);
				strcpy(current->next->rn , temp.rn);
				strcpy(current->next->ad, temp.ad);
				current->next->mil= temp.mil;
				strcpy(current->next->phone, temp.phone);	
				current->next->age = temp.age;	
			}
			current = current->next;
		}
		current1 = current1->next;
	}
	current = head;
	while(current != NULL)
	{
		printf("1.이름:%s\n",current->name);
		printf("2.주민번호:%s\n",current->rn);
		printf("3.주소:%s\n",current->ad);
		printf("4.마일리지:%d\n",current->mil);
		printf("5.전화번호:%s\n",current->phone);
		
		if(current->rn[7] == '1' || current->rn[7] == '3')
		{
			printf("6.성별:남\n");
		}
		else if(current->rn[7] == '2' || current->rn[7] == '4')
		{
			printf("6.성별:여\n");
		}

		printf("7.나이:%d\n\n",current->age);

		current = current->next;
	}
}


void addList(student *st0)				///////////////////////////////////////////노드 추가/////////////////////////////////////////////////
{
	int count=1;
	struct student *current;

	current = head;	
	if(head == NULL)
	{	
		head = (student *)malloc(sizeof(student));
		head->id = st0->id;
		strcpy(head->name, st0->name);
		strcpy(head->rn, st0->rn);
		strcpy(head->ad, st0->ad);
		head->mil = st0->mil;
		strcpy(head->phone,st0->phone);		
		head->age = st0->age;

		head->next = NULL;	
	}
	else
	{
		while(current->next != NULL)
		{
			current = current->next;
			count ++;
		}

		current->next = (student *)malloc(sizeof(student));
		
		current->next->prev = current;
		current = current->next;

		current->id = st0->id;
		strcpy(current->name, st0->name);
		strcpy(current->rn, st0->rn);
		strcpy(current->ad, st0->ad);
		current->mil = st0->mil;
		strcpy(current->phone,st0->phone);		
		current->age = st0->age;

		current->next = NULL;
		last = current;
	}
}

void jumin_input(char * juminChar) //주민번호, 이름, 각각의 입력 구문을 모두 함수화.
{
	int i;
	struct student *b;

	while(1)
	{
		i=0;
		b = head;
		while(b != 0)
		{
			if(strcmp(juminChar , b->rn) == 0)
			{
				i=1;
				break;
			}				
			b = b->next;		
		}

		if(i==1)
		{
			printf("이미 존재하는 주민번호 입니다. 다시 입력해주세요.");
			fflush(stdin);
			scanf("%s", juminChar);
		}
		else if((((juminChar[0] <= '9' && juminChar[0] >= '2') && (juminChar[7] == '3' || juminChar[7] == '4')) || ((juminChar[0] == '0' ||juminChar[0] == '1') && (juminChar[7] == '1' || juminChar[7] == '2'))) || (juminChar[6] != '-') || strlen(juminChar) != 14)
		{
			printf("잘못된 주민번호 형식입니다. 다시 입력해주세요.");
			fflush(stdin);
			scanf("%s",juminChar);
		}
		else if((((juminChar[0] <= '9' && juminChar[0] >= '2') && (juminChar[7] == '1' || juminChar[7] == '2')) || ((juminChar[0] == '0' || juminChar[0] == '1') && (juminChar[7] == '3' || juminChar[7] == '4'))) && (juminChar[6] == '-') && (strlen(juminChar) == 14) && (i==0))
		{
			break;
		}
	}
}

// 이름 입력 하는 함수(예외처러 포함된) (ENTER , EDIT에서 호출하도록)
void ENTER()									////////////////////////////////////////////////////////입 력/////////////////////////////////////////////////////////////  
{		
	struct student data, *current;
	char answer;	
	int i;

	while(1)
	{
		id++;
		data.id = id;
		
		printf("1.이름 : ");
		fflush(stdin);
		scanf("%s", data.name);

		if(strlen(data.name)>20)
		{
			while(1)
			{
				printf("이름이 너무 깁니다. 다시 입력해주세요");
				fflush(stdin);
				scanf("%s", data.name);

				if(strlen(data.name) <= 20)
				{
					break;
				}
			}
		}

		printf("2.주민번호 : ");
		fflush(stdin);
		scanf("%s", data.rn);

		jumin_input(data.rn);

		if(data.rn[7] == '1' || data.rn[7] == '2')
		{
			data.age = 2017 - 1900 - ((data.rn[0]-48)*10 + (data.rn[1]-48));	
		}
		else if(data.rn[7] == '3' || data.rn[7] == '4')
		{
			data.age = 2017 - 2000 - ((data.rn[0]-48)*10 + (data.rn[1]-48));
		}

		printf("3.주소 : ");
		fflush(stdin);
		gets(data.ad);

		if(strlen(data.ad) >= 40)
		{
			while(1)
			{
				printf("주소가 너무 깁니다. 다시 입력해주세요.");
				fflush(stdin);
				gets(data.ad);

				if(strlen(data.ad) < 40)
				{
					break;
				}
			}
		}

		printf("4.마일리지 : ");
		fflush(stdin);
		scanf("%d", &data.mil);

		printf("5.전화번호 : ");
		fflush(stdin);
		scanf("%s", data.phone);

		if(strlen(data.phone) >13)
		{
			while(1)
			{
				printf("전화번호가 너무 깁니다. 다시 입력해주세요.");
				fflush(stdin);
				scanf("%s", data.phone);

				if(strlen(data.phone) <= 13)
				{
					break;
				}
			}
		}

		addList(&data);						// 링크드리스트 함수 호출

		printf("\n계속 하시겠습니까?"); // 질문!!!
		fflush(stdin);
		scanf("%c",&answer);

		int q=0;

		if(answer == 'Y' || answer == 'y')
		{								
		}					
		else if(answer == 'N' || answer == 'n')
		{			
			return;		
		}
		else
		{
			while(1)
			{
				printf("다시 입력하세요 : ");
				fflush(stdin);
				scanf("%c", &answer);						
				if(answer == 'Y' || answer == 'y')
				{
					break;						
				}
				else if(answer == 'N' || answer == 'n')
				{
					return;
				}
				else
				{

				}
			}				
		}
	}
}

void CHANGE(student *current)						//////////////////////////////////////////////수 정//////////////////////////////////////////////////
{
	char rrn[100];
	int answer2,i,count1,count2;
	struct student a;

	if(head==NULL)
	{
		printf("입력된 학생이 없습니다. 아무키나 입력하세요.");
		getch();
		return;
	}

	printf("\n");
	i=1;
	current = head;

	while(current != 0)
	{		
		printf("%d.이름:%s\t주민번호:%s\n",i, current->name, current->rn);			
		current = current->next;
		i++;
	}

	printf("\n수정하고자하는 학생의 주민번호를 입력하세요: ");
	fflush(stdin);
	scanf("%s",rrn);

	count1 = 0;
	current = head;
	while(current != NULL)
	{
		current = current->next;
		count1++;	
	}

	i=0;
	while(1)
	{
		count2 = 1;
		current = head;
		while(current != NULL)
		{
			if(strcmp(current->rn , rrn) == 0)			// 정방향 연결리스트
			{
				i=1;
				break;		
			}
			current = current->next;	
			count2++;
		}

		if(i != 1)
		{
			printf("없는 주민번호 입니다. 다시 입력해주세요.\n");
			scanf("%s", rrn);		
		}
		else if(i=1)
		{
			break;
		}
	}

	if(count1 / 2 < count2)							// 역방향 연결리스트
	{
		current = last;
		while(current != NULL)
		{
			if(strcmp(current->rn , rrn) == 0)
			{
				break;			
			}
			current = current->prev;		
		}	
	}

	printf("1.이름 : %s \n", current->name);
	printf("2.주민번호 : %s \n", current->rn);
	printf("3.주소 : %s \n", current->ad);
	printf("4.마일리지 : %d \n", current->mil);
	printf("5.전화번호 : %s \n", current->phone);

	printf("\n수정할 번호를 입력하세요 : ");
	scanf("%d", &answer2);

	while(1)
	{
		if(answer2 == 1)
		{
			printf("1.이름 : ");
			fflush(stdin);
			scanf("%s", current->name);

			if(strlen(current->name)>20)
			{
				while(1)
				{
					printf("이름이 너무 깁니다. 다시 입력해주세요");
					fflush(stdin);
					scanf("%s", current->name);

					if(strlen(current->name) <= 20)
					{
						break;
					}
				}
			}
			break;
		}
		else if(answer2 == 2)
		{
			printf("2.주민번호 : ");
			fflush(stdin);
			scanf("%s", a.rn);

			jumin_input(a.rn);

			strcpy(current->rn ,a.rn);
			break;
		}
		else if(answer2 == 3)
		{
			printf("3.주소 : ");
			fflush(stdin);
			gets(current->ad);

			if(strlen(current->ad) >= 40)
			{
				while(1)
				{
					printf("주소가 너무 깁니다. 다시 입력해주세요.");
					fflush(stdin);
					gets(current->ad);

					if(strlen(current->ad) < 40)
					{
						break;
					}
				}
			}
			break;
		}
		else if(answer2 == 4)
		{
			printf("\n마일리지 : ");
			fflush(stdin);
			scanf("%d", &current->mil);
			break;
		}
		else if(answer2 == 5)
		{
			printf("5.전화번호 : ");
			fflush(stdin);
			scanf("%s", current->phone);

			if(strlen(current->phone) >13)
			{
				while(1)
				{
					printf("전화번호가 너무 깁니다. 다시 입력해주세요.");
					fflush(stdin);
					scanf("%s", current->phone);

					if(strlen(current->phone) <= 13)
					{
						break;
					}
				}
			}
			break;
		}
		else
		{
			printf("다시 입력하세요.");			
			scanf("%d",&answer2);			
			fflush(stdin);
		}
	}
	printf("수정되었습니다. 아무키나 입력하세요.");
	getch();
	return;
}

void DELETE(student *current)					//////////////////////////////////////////////////삭 제///////////////////////////////////////////////////////
{
	int i,count1,count2;
	char rrn[100];
	struct student *prev1;

	if(head == 0)
	{
		printf("입력된 학생이 없습니다. 아무키나 입력하세요.");
		getch();
		return;
	}

	printf("\n");
	i=1;
	current = head;

	while(current != 0)
	{		
		printf("%d.이름:%s\t주민번호:%s\n",i, current->name, current->rn);		

		current = current->next;
		i++;
	}
	printf("\n삭제하고자하는 학생의 주민번호를 입력하세요: ");
	fflush(stdin);
	scanf("%s",rrn);

	count1 = 0;
	current = head;
	while(current != NULL)
	{
		current = current->next;
		count1++;	
	}

	i=0;
	while(1)
	{
		count2 = 1;
		current = head;
		while(current != 0)
		{
			if(strcmp(current->rn , rrn) == 0)
			{
				i=1;
				break;		
			}
			current = current->next;
			count2++;
		}

		if(i != 1)
		{
			printf("없는 주민번호 입니다. 다시 입력해주세요.\n");
			scanf("%s", rrn);		
		}
		else if(i=1)
		{
			break;
		}
	}

	if(count1 / 2 < count2)							    // 역방향 연결리스트
	{
		current = last;
		while(current != NULL)
		{
			if(strcmp(current->rn , rrn)==0)
			{
				if(current == head)						// 첫번째 노드 삭제
				{
					head = current->next;
					current->next->prev = NULL;
					free(current);	
					break;
				}
				else if(current->next != NULL)			// 중간 노드 삭제
				{
					prev1=head;
					while(prev1->next != current)
					{
						prev1 = prev1->next;
					}
					prev1->next = current->next;
					current->next->prev = prev1;

					free(current);	
					break;
				}
				else if(current->next == NULL)			// 마지막 노드 삭제
				{
					prev1=head;
					while(prev1->next != current)
					{
						prev1 = prev1->next;
					}
					prev1->next = NULL;

					free(current);
					break;
				}		
			}		
			current = current->prev;		
		}	
	}
	else if(count1 / 2 >= count2)						// 정방향 연결리스트
	{
		current = head;
		while(current != NULL)
		{	
			if(strcmp(current->rn , rrn)==0)
			{
				if(current == head)						// 첫번째 노드 삭제
				{
					head = current->next;
					current->next->prev = NULL;
					free(current);	
					break;
				}
				else if(current->next != NULL)			// 중간 노드 삭제
				{
					prev1=head;
					while(prev1->next != current)
					{
						prev1 = prev1->next;
					}
					prev1->next = current->next;
					current->next->prev = prev1;

					free(current);	
					break;
				}
				else if(current->next == NULL)			// 마지막 노드 삭제
				{
					prev1=head;
					while(prev1->next != current)
					{
						prev1 = prev1->next;
					}
					prev1->next = NULL;

					free(current);
					break;
				}		
			}		
			current = current->next;		
		}
	}

	

	printf("삭제되었습니다. 아무키나 입력하세요.");
	getch();
	return;
}

void PRINT(student * current)				//////////////////////////////////////////////출 력///////////////////////////////////////////////////
{

	if(head == 0)
	{
		printf("입력된 학생이 없습니다. 아무키나 입력하세요.");
		getch();
		return;
	}

	printf("\n");
	
	current = head;

	while(current != NULL)
	{
		printf("1.이름:%s\n",current->name);
		printf("2.주민번호:%s\n",current->rn);
		printf("3.주소:%s\n",current->ad);
		printf("4.마일리지:%d\n",current->mil);
		printf("5.전화번호:%s\n",current->phone);
		
		if(current->rn[7] == '1' || current->rn[7] == '3')
		{
			printf("6.성별:남\n");
		}
		else if(current->rn[7] == '2' || current->rn[7] == '4')
		{
			printf("6.성별:여\n");
		}

		printf("7.나이:%d\n",current->age);
		printf("\n");
						
		current = current->next; 
	}

	printf("아무키나 입력하세요.");
	getch();
}


void ARRAY()								//////////////////////////////////////////정 렬/////////////////////////////////////////////
{
	int num1,num2;

	printf("\n1.이름순\n");
	printf("2.마일리지\n");
	printf("3.id순\n");
	printf("4.나이순\n");
	printf("정렬할 번호를 입력하세요");
	scanf("%d",&num1);

	printf("\n1.정순\n");
	printf("2.역순\n");
	printf("정렬방법을 선택해주세요.");
	scanf("%d",&num2);
	
	printf("\n");

	switch(num1)
	{
		case 1:
		if(num2 == 1)
		{
			name_array();		
		}
		else if(num2 == 2)
		{
			name_reverse_array();	
		}break;
		case 2:
		if(num2 == 1)
		{
			mil_array();
		}
		else if(num2 == 2)
		{
			mil_reverse_array();
		}break;
		case 3:
		if(num2 == 1)
		{
			id_array();
		}
		else if(num2 == 2)
		{
			id_reverse_array();
		}break;
		case 4:
		if(num2 == 1)
		{
			age_array();		
		}
		else if(num2 == 2)
		{
			age_reverse_array();
		}break;
	}
	printf("아무키나 입력해주세요.");
	getch();
}

void SAVE(student *current, FILE *fp)					/////////////////////////////////////////저 장////////////////////////////////////////////
{
	
	int i;
	fp = fopen("학생정보관리.txt","w+");

	current = head;
	while(current != 0)
	{
		fprintf(fp,"%s:%s:%s:%d:%s\n",current->name, current->rn, current->ad, current->mil, current->phone);
		current = current->next;
	}
	fclose(fp);
	 
	printf("저장되었습니다. 아무키나 입력하세요.");
	getch();
	return;
}

void END()							////////////////////////////////////////////종 료////////////////////////////////////////////////
{		
	exit(0);		
}