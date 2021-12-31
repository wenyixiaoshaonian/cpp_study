#include "string_class.h"


int main()
{
	double a[10] = {1,2,3,4,5,6,7,8,9,0};
	Greap<double,10> std1(a);
	std1.show();
	return 0;
}