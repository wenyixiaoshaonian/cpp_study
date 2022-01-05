#include "string_class.h"
#include "string"

using namespace std;
int main()
{
#if 1
	char a[] = "hello world....12138";
	string s1("test11111....");
	string s2(10,'c');
	string s3(s2);
	string s4(a,5);
	string s5(a+2,a+8);
	string s6(a,2,9);

	string s7;
	s7 = s1 + s4;
	string s8,s9,s10;

	cin >> s8;
	cin.get();
	getline(cin,s9);
	cout << "s1 : " << s1 << "size : "<< s1.size() << endl;
	cout << "s2 : " << s2 << endl;
	cout << "s3 : " << s3 << endl;
	cout << "s4 : " << s4 << endl;
	cout << "s5 : " << s5 << endl;
	cout << "s6 : " << s6 << endl;
	cout << "s7 : " << s7 << "size : "<< s7.size() << endl;
	cout << "s8 : " << s8 << endl;
	cout << "s9 : " << s9 << endl;

	s7 += s9;
	cout << "s7 : " << s7 << "size : "<< s7.size() << endl;
	int res = s9.find("test");
	cout << "res : " << res << endl;
#else
	double a[10] = {1,2,3,4,5,6,7,8,9,0};
	Greap<double,10> std1(a);
	std1.show();
	counts<double,10>();
	reports(std1);
#endif
	return 0;
}
