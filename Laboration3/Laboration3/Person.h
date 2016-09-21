#pragma once
#include <string>
class Person
{
public:
	std::string name;
	std::string address;  

	Person(std::string name, std::string address);
	~Person();

	void print();
	
};

