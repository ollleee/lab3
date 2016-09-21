#include "Person.h"
#include <string>
#include <iostream>

std::string name;
std::string address;

Person::Person(std::string name, std::string address)
{
	this->name = name;
	this->address = address;
}

Person::~Person()
{
}

void Person::print()
{
	std::cout << name << ", " << address << std::endl;
}