#include "dy_demo.h"
#include "string.h"
using namespace std;
void show(const dy_demo s)
{
  cout << " name : " << s;
}

int main()
{
  char * pool = new char[512];
  dy_demo xiaomi("xiaomi");
  dy_demo xiaomi2;
  dy_demo *test1 = new (pool) dy_demo;
  dy_demo *test2 = new (pool + sizeof(dy_demo)) dy_demo;
  dy_demo  test3(3);
  cout << " >>==name : " << test3;
  show(xiaomi);
  xiaomi2 = xiaomi;
  cout << " name : " << xiaomi;
  cout << " name : " << xiaomi2;

  delete [] pool;
  return 0;
}
