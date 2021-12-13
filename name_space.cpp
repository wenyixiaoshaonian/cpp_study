#include <iostream>
#include <new>

using namespace std;

namespace test_xiaol
{
  char a;
  int b;
  int c;
}
namespace test_xiaom
{
  char a;
  int b;
  int c;
}
char a = 'b';
int main()
{
  using test_xiaol::a;
  a = 'a';
  cout << a << endl;
  cout << ::a << endl;
  return 0;
}
