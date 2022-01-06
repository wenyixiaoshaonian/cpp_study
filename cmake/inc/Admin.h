#pragma once

#include "iostream"
#include "string"

class Admin
{

private:
	std::string name;
	std::string id;
	std::string passwd;
public:
	Admin();
	Admin(const std::string na,const std::string id_value,const std::string wd):
		name(na),id(id_value),passwd(wd) { std::cout << "Creat adminster successful...\n";}
	virtual ~Admin() {};

	const std::string GetName() {return name;}
	const std::string GetId() {return id;}
	const std::string GetPasswd() {return passwd;}
	void show();
};