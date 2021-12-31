#ifndef OVER_CLASS_
#define OVER_CLASS_
#include <iostream>
#include <string>
class school
{
private:

	std::string name;
	int age;
	int num;
public:
	class student
	{
	private:
		std::string name;
		int age;
	public:
		student() : name("null"),age(0) {};
		student(const std::string s,int g) : name(s),age(g) {};
		virtual ~student() {};
		void show();
		void getSchName();
	};
	school() : name("null"),age(0),num(0) {};
	school(const std::string s,int g,int n = 0) : name(s),age(g),num(n) {};
	virtual ~school() {};
	void show();
};



#endif