#include "Student.h"

void Student::show()
{
	using std::cout;
	using std::endl;
	cout << "*********************" << endl;
	cout << "name    : " << name << endl;
	cout << "id      : " << id << endl;
	cout << "passwd  : " << passwd << endl;
	cout << "grade   : " << grade << endl;
	cout << "sex 	 : " << sex << endl;
	cout << "*********************" << endl;
}