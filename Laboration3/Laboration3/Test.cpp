#include "Person.h"
#include "PersonReg.h"
#include <iostream>

int main()
{
	Person* pers = new Person("Olle", "Korsv.17");
	Person* pers1 = new Person("Peter", "lelgatan");
	//pers->print();
	PersonReg* reg = new PersonReg(5);
	reg->addPerson(pers);
	reg->addPerson(pers1);
	reg->print();
	//reg->delPerson(pers);
	std::cout << reg->search("Olle", nullptr)->name;
	
	system("pause");
}