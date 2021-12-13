#include <iostream>
#include "stock.h"

using namespace std;

int main()
{
  Stock res;
  int a = 1,b = 2,c;
  long test = 0;
//  Stock xiaomi = Stock("xiaomi",300,1.25);
//  Stock *xiaomi = new Stock("xiaomi",300,1.25);
  Stock xiaomi[3] {
    Stock("xiaomi",300,1.25),
    Stock("xiaomi1",400,2.25),
    Stock("xiaomi2",500,3.25)
  };
  for(int i = 0;i< 3;i++)
  {
    xiaomi[i].show();
  }
  res = xiaomi[1] + xiaomi[2];
  c = a + b;
  cout << c << endl;
  res.show();

  c = madd(11,xiaomi[1]);
  cout << c << endl;

  test = xiaomi[1];
  cout << test << endl;

  cout << xiaomi[1] << ">>>===222 \n";
#if 0
  Stock xiaomi,huawei,res;
  xiaomi.show();

  xiaomi.acquire("xiaomi",25,120);
  xiaomi.buy(30,80);
  xiaomi.show();
  xiaomi.update(200);
  xiaomi.show();
  xiaomi.sell(50,200);
  xiaomi.show();

  huawei.acquire("huawei",300,300);
  res = xiaomi.topval(huawei);
  res.show();
#endif
  return 0;
}
