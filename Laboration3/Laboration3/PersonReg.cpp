#include "PersonReg.h"
#include "Person.h"
#include <string>
#include <iostream>

Person* personer[5] = {nullptr, nullptr,nullptr,nullptr,nullptr};
int maxSize;

PersonReg::PersonReg(int maxSize)
{
	this->maxSize = maxSize;
}

PersonReg::~PersonReg()
{
}

void PersonReg::addPerson(Person * person)
{
	int i = 0;
	while (i < 5) {
		if (personer[i] == nullptr) {
			personer[i] = person;
			break;
		}
		else {
			i++;
		}

	}
}

void PersonReg::print()
{
	for (int i = 0; i < maxSize; i++) {
		if (personer[i] != nullptr) {
			std::cout << personer[i]->name << ", " << personer[i]->address << std::endl;
		}
	}
}


void PersonReg::delPerson(Person * person)
{
	for (int i = 0; i < maxSize; i++) {
		if (personer[i] == person) {
			personer[i] = nullptr;
		}
	}
}

Person * PersonReg::search(std::string name, Person* last)
{	
	Person* person;
	for (int i = 0; i < maxSize; i++) {
		if (personer[i]->name == name) {
			person = personer[i];
			return person;
		}
		
	}

	return 0;

}






