#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

struct student
{
	char name[100];
	char rn[100];
	char ad[100];
	int mil,id,age;
	char mile[100];
	char phone[100];
	char gender[5];
	int num,q,i,m,n,k,b;
	char answer,answer2;
	char fg[255];
	student *next;
	student *prev;
};	

int id;
student *head = NULL;
student *last;

void ARRAY();	
void age_array();
void age_reverse_array();
void id_array();
void id_reverse_array();
void name_array();
void name_reverse_array();
void mil_array();
void mil_reverse_array();
void ID_array();
void ID_reverse_array();
void age_array();
void age_reverse_array();
void jumin_input(char *juminChar);
void addList(student *st0);
void ENTER();
void CHANGE(student *current);
void DELETE(student *current);
void PRINT(student *current);
void SAVE(student *current, FILE *fp);
void END();

#endif