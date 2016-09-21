#include "Person.h"
#include "PersonReg.h"

int main()
{
	PersonReg* reg = new PersonReg(6);
	Person* pers = new Person("Olle", "gatan");
	Person* pers1 = new Person("Peter", "vagen");
	Person* pers2 = new Person("Dennis", "Sjobo");

	reg->addPerson(pers);
	reg->addPerson(pers1);
	reg->addPerson(pers2);
	reg->print();
	//reg->delPerson(pers1);
	//reg->print();
	//std::cout << reg->search("Olle", nullptr)->name;

	system("pause");
	delete reg;
	delete pers;
	delete pers1;
	delete pers2;
}