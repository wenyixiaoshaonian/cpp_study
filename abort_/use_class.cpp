#include"over_class.h"
#include "cstdlib"
#include<vector>

using namespace std;
int abb_te(int a,int b)
{
	if(a < b)
		abort();
	else
		cout << "a - b = " << a - b << endl;

	return a - b;
}

int main()
{
	#if 0
	int a[3] = {3,2,4};
	vector<int> ain;
	int i,j;
	int res;
	for(i = 0;i < 3;i++)
	{
		ain.push_back(a[i]);
	}
	cout << ain.size() <<endl;
	

	cout << "please enter a number :\n";
	cin >> res;

	for(i = 0;i < ain.size();i++)
	{
		if(ain[i] > res)
			continue;
		for(j = i+1;j<ain.size()-1;j++)
		{
			if((ain[i] + ain[j]) == res)
				cout << "[ " << i << " " << j << " ]" << endl;
		}
	}
#else

	school sch1("universchool",12,2000);
	school::student std1("xiaomin",19);

	sch1.show();
	std1.show();

	cout << "res = " << abb_te(20,15) << endl;

	cout << "res = " << abb_te(10,12) << endl;
#endif	
	cout << "Bye~" <<endl;
	return 0;
}