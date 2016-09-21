#pragma once
#include <string>
#include "Person.h"
class PersonReg
{
	Person* personer;
	int maxSize;
public:

	PersonReg(int maxSize);
	~PersonReg();
	void PersonReg::addPerson(Person* person);
	void PersonReg::delPerson(Person* person);
	Person* search(std::string name, Person* last);
	void PersonReg::print();
};