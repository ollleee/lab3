#include "PersonReg.h"
#include "Person.h"
#include <string>
#include <iostream>

int size = 0;

PersonReg::PersonReg(int maxSize)
{
	this->maxSize = maxSize;
	personer = new Person[maxSize]();

}

PersonReg::~PersonReg()
{
	delete[] personer;
}

void PersonReg::addPerson(Person * person)
{
	if (size < maxSize) {
		personer[size] = *person;
		size++;
	}
}


void PersonReg::print()
{
	int i = 0;
	while (i < size) {
		personer[i].print();
		i++;
	}
}


void PersonReg::delPerson(Person * person)
{
	int i = 0;
	while (i < maxSize) {
		if (personer[i].name == person->name) {
			for (int j = i; j < size; j++) {
				personer[j] = personer[j + 1];
			}
			size--;
			break;
		}
		i++;
	}
}

Person * PersonReg::search(std::string name, Person* last)
{	
	return 0;
}






