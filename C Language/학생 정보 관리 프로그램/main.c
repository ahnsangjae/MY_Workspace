#include "student.h"

void main()
{		
	int b=1,num,i,m,j=0,count=0;
	struct student data;
	struct student a[10]={0,};
	struct student *current;
	char *namep;
	FILE *fp;

	fp = fopen("�л���������.txt", "r+");

	if(fp == NULL)    // ������ ���� ��
	{
		fp = fopen("�л���������.txt","w+");
	}
	else       // ������ �̹� ���� ��
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
			data.mil = atoi(data.mile);		// mil�� int�� �����̹Ƿ� atoi��� �Լ��� �̿��� char�� ���� mile�� ������ ��ȯ����
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
		while(current != 0)					// fgets�� ������ �� ������ phone�� �� �������� ������ ������. �� ������ �ι��ڷ� �ٲ㼭 �ٸ� ������ ���� �ϱ�����.
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
		printf("�л���������\n");
		printf("1.�Է�\n");
		printf("2.����\n");
		printf("3.����\n");
		printf("4.���\n");	
		printf("5.����\n");
		printf("6.����\n");
		printf("7.����\n");
		printf("\n���ϴ� ��ȣ�� �Է��ϼ��� : ");
		fflush(stdin);
		scanf("%d", &num);	

		switch(num)
		{
			case 1: 
			ENTER();break;
			case 2:
			CHANGE(&data);break;				// ����!!! &data�� �ȳ־ �����ʳ�? �׳� �Լ������� student *current ��� �����ϰ� ������� �ʳ�?
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