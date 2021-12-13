#include <iostream>
#include "stock.h"

using namespace std;

int main()
{
//  Stock xiaomi = Stock("xiaomi",300,1.25);
//  Stock *xiaomi = new Stock("xiaomi",300,1.25);
  Stock xiaomi;
  xiaomi.show();

  xiaomi.acquire("xiaomi",25,120);
  xiaomi.buy(30,80);
  xiaomi.show();
  xiaomi.update(200);
  xiaomi.show();
  xiaomi.sell(50,200);
  xiaomi.show();
  return 0;
}
