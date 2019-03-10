#include "Turboc.h"
#include "coutPerson.h"

void main()
{
	Person Boy("을지문덕", 25);
	Person *p;
	
	p = new Person("강감찬", 22);

	cout << Boy << endl;
	cout << p << endl;

	delete p;
}