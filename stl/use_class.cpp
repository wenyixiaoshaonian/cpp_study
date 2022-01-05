//#include"stl_class.h"
#include"iostream"
#include "vector"
#include "algorithm"
#include "string"
using namespace std;

int show(int & ptr)
{
 cout << "ret: "<< ptr <<endl;
 return 0;
}

int main()
{

 vector<int> ret(5),ret_new(5);
 vector<int>::iterator pd1,pd2;
// auto pd = ret.begin();
 int n,i;
 string letter;
 cout << "please input a string:\n";
 getline(cin,letter);
 cout << letter << endl;

 sort(letter.begin(),letter.end());
 cout << letter << endl;
// for(i = 0;i < 5;i++)
// {
//  cin >> ret[i];
// }
// ret_new = ret;

// ret.push_back(666);
// pd1 = ret.begin();
// pd2 = ret.end();
// *pd1 = 520;

// ret.erase(pd1 + 1,pd1 + 3);
// ret.insert(pd1 + 2,ret_new.begin() + 1,ret_new.end());
//
// for_each(ret.rbegin(),ret.rend(),show);
// random_shuffle(ret_new.begin(),ret_new.end());

// for_each(ret_new.begin(),ret_new.end(),show);
// cout << "排序后： " << endl;
// sort(ret_new.begin(),ret_new.end());
// for_each(ret_new.begin(),ret_new.end(),show);
// for(int x:ret_new)
//  show(x);

// for(pd1;pd1 != pd2;pd1++)
// {
//  cout << "ret[" << i << "] : " << *pd1 <<endl;
// }
// pd1 +=3;
// pd1 -=2;
// *pd1 = 100;
// cout << "ret[" << 3 << "] : " << *pd1 <<endl;


// for(i = 0;i < ret.size();i++)
// {
//  cout << "ret[" << i << "] : " << pd1[i] <<endl;
// }

// *pd2 = 111;
// cout << "size = " << ret.size() << endl;
// cout << "begin = " << *pd1 << endl;
// cout << "end = " << *pd2 << endl;
 return 0;
}
