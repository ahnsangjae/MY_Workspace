#include "Turboc.h"
#include "coutPerson.h"

void main()
{
	Person Boy("��������", 25);
	Person *p;
	
	p = new Person("������", 22);

	cout << Boy << endl;
	cout << p << endl;

	delete p;
}