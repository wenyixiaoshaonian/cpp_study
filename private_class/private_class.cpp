#include "private_class.h"

using namespace std;
void Student::show_so(int n)
{
	int i;
	cout << "choice to show :" << ArrayB::operator[](n) <<endl;

	for(i = 0;i <ArrayB::size();i++)
	{
		cout << "num = " << i << " val = " << ArrayB::operator[](i) << endl;
	}
	cout <<endl;
}