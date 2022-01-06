#pragma once
#include "string"
#include "iostream"

class Student
{
private:
	std::string name;
	std::string id;
	std::string passwd;
	double grade;
	std::string sex;
public:
	Student();
	Student(const std::string na,const std::string id_val,const std::string pass,const double gad,std::string se):
		name(na),id(id_val),passwd(pass),grade(gad),sex(se) { std:: cout << "creat student success...\n";};
	virtual ~Student() {};

	const std::string GetName() {return name;}
	const std::string GetId() {return id;}
	const std::string GetPasswd() {return passwd;}
	const double GetGreade() {return grade;}
	const std::string GetSex() {return sex;}	
	void show();

	void SetPasswd(const std::string pass) {passwd = pass;}
	bool operator == (const Student & u) { return id == u.id;}
	bool operator < (const Student & u) { return grade < u.grade;}
};