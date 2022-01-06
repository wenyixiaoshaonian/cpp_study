#include "iostream"
#include "fstream"
#include "sstream"
#include "string"

using namespace std;

int main()
{
	string str1;
	char a[50];
	ofstream fout;
	ifstream fin;
	ostringstream outstr;
#if 0
//	fout.open("aout.txt");
//	if(fout.fail())
//	if(!fout)
	if(!fout.is_open())
		cout << "fout open failed...\n";
	fin.open("ain.txt");
	if(!fin.is_open())
		cout << "fin open failed...\n";

	cout << "please input a string to store: \n";
	getline(cin,str1);

	fout << str1 << endl;

	fin.getline(a,50);

	fout << a << endl;

	fout.close();
	fin.close();
#endif
	cout << "please input a string to store: \n";
	getline(cin,str1);	
	outstr << "The hard disk: " << str1 << endl;

	string res = outstr.str();
	cout << res;

	istringstream intstr(res);
	string word;
	while(intstr >> word)
		cout << word;
	return 0;
}