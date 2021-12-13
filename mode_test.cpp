#include <iostream>
#include <string>

using namespace std;
template <typename T>
inline T mode_test(T x,T y)
{
  x++;
  y++;
  return x+y;
}
template <typename T>
inline T mode_test(T x,double y)
{
  return x+y;
}

int main()
{
  int a = 20000,b = 30000,result;
  float fa = 2.01,fb = 3.04,fres;
  int & c = a;
  c = 43200;
  result = mode_test(a,b);
  cout << "a addr : " << &a << " a = " << a << endl;
  cout << "c addr : " << &c << " c = " << c << endl;
  cout << result << endl;
  fres = mode_test(fa,fb);
  cout << fres << endl;
  fres = mode_test(fa,10);
  cout << fres << endl;
  return 0;
}
