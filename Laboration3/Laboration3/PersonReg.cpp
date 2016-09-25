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
	while (i < size) {
		if (!personer[i].name.compare(person->name)) {
			size--;
			for (int j = i; j < size; j++) {
				personer[j] = personer[j + 1];
			}
			break;
		}
		i++;
	}
}


Person * PersonReg::search(std::string searchString, Person* last)
{	
	int index = 0;
	if (last != nullptr) {
		for (int i = 0; i < size; i++) {
			if (!(last->name.compare(personer[i].name)) && !(last->address.compare(personer[i].address))) {
				index = i;
			}
		}
	}
	for (int i = index + 1; i < size; i++) {
		if (personer[i].name.find(searchString) != std::string::npos 
			|| personer[i].address.find(searchString) != std::string::npos) {
				return &(personer[i]);
			}
		}
		return nullptr;
}








