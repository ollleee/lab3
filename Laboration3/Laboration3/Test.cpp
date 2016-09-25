#include "Person.h"
#include "PersonReg.h"
#include "PersonMedTel.h"
#include <iostream>
#include <string>
#include <fstream>

bool ReadReg(PersonReg& reg, std::string fileName);

int main()
{
	/*std::locale::global(std::locale("swedish"));
	PersonReg* reg = new PersonReg(6);
	
	ReadReg(*reg, "PersonExempel.txt");
	reg->print();
	std::cout << std::endl;

	Person* x1 = reg->search("sson", nullptr);
	Person* x2 = reg->search("sson", x1);
	Person* x3 = reg->search("sson", x2);
	std::cout << "Search: " << std::endl;
	x1->print();
	x2->print();
	x3->print();

	std::cout << std::endl;
	reg->delPerson(x3);
	reg->print();
	system("pause");
	delete reg;*/

	Person * myPerson = new PersonMedTel("Olle", "Gatan", "112");
    myPerson->print();
	system("pause");
	delete myPerson;
}

bool ReadReg(PersonReg& reg, std::string fileName) {
	std::string line;
	std::ifstream myfile(fileName);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			while (line.length() == 0 && getline(myfile, line))
				;
			std::string name(line);
			std::string adress;
			getline(myfile, adress);
			reg.addPerson(&Person(name, adress));
		}
		myfile.close();
		return true;
	}
	else {
		std::cout << "Unable to open file";
		return false;
	}
}