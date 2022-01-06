#include "Admin.h"

void Admin::show()
{
	using std::cout;
	using std::endl;
	cout << "*********************" << endl;
	cout << "name   : " << name << endl;
	cout << "id     : " << id << endl;
	cout << "passwd : " << passwd << endl;
	cout << "*********************" << endl;
}