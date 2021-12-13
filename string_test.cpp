#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

struct people
{
  string name;
  int year;
  int num;
};
void test_cbx(int *x)
{
  x[1] = 5;
}
static people std1 = {"huang xiao ming",32,4};
int main()
{

  string name;
  string val = "hello world";
  string str3;
  people std2;
//  int *std3 = new int [5];
  int std3[5] = {0};
  std2.name = "liu yi fei";
  std2.year = 18;

  std3[1] = 1;
  test_cbx(std3);
  cout << std3[1] << endl;
//  cout << "std1.name addr : " << &std1.name << endl;
//  cout << "std2.name addr : " << &std2.name << endl;
  cout << "std3 addr : " << std3 << endl;
//  cout << "std1.year addr : " << &std1.year << endl;
//  cout << "std2.year addr : " << &std2.year << endl;
//  cout << "std3->year addr : " << &std3->year << endl;
//  std3++;
  cout << "std3 addr : " << std3+1 << endl;

//  delete [] --std3;
//  std3 = NULL;
  sleep(-1);
  return 0;
}
