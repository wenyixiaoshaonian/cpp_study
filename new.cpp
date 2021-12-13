#include <iostream>
#include <new>

using namespace std;
char test1[100];
char test2[50];
int main()
{
  int *prt1 = new (test1) int [20];
  double *prt2 = new (test2) double;

  cout << "test1 addr : " << &test1 << endl;
  cout << "test2 addr : " << &test2 << endl;
  cout << "prt1 addr : " << prt1 << endl;
  cout << "prt2 addr : " << prt2 << endl;
  return 0;
}
