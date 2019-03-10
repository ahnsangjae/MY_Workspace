#ifndef COUTPERSON_HEADER
#define COUTPERSON_HEADER

#include <iostream>
#include "Turboc.h"
using namespace std;

class Person
{
	friend ostream &operator <<(ostream &c, const Person &P);
	friend ostream &operator <<(ostream &c, const Person *pT);
private:
	char *Name;
	int Age;

public:
	Person(const char *aName, int aAge)
	{
		Name = new char[strlen(aName) + 1];
		strcpy_s(Name, strlen(aName) + 1, aName);
		Age = aAge;
	}

	~Person()
	{
		delete[] Name;
	}

	void OutPerson()
	{
		printf("�̸� : %s ���� : %d\n", Name, Age);
	}
};

ostream &operator <<(ostream &c, const Person &P)
{
	c << "�̸� : " << P.Name << " ���� : " << P.Age;

	return c;
}

ostream &operator <<(ostream &c, const Person *pT)
{
	c << *pT;

	return c;
}

#endif