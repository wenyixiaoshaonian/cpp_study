#include"over_class.h"


void school::student::show()
{
	std::cout << "student name : " << student::name << std::endl
		<< "age : " << student::age <<std::endl;
}
void school::student::getSchName()
{
	std::cout << "school name : " << name << std::endl
		<< "age : " << age <<std::endl;
}

void school::show()
{
	std::cout << "school name : " << name << std::endl
		<< "age : " << age <<std::endl;
}
