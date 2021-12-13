#include <iostream>
#include <new>

using namespace std;

class Stock
{
private:
  std::string company;
  long shares;
  double share_val;
  double total_val;
  void set_tot() { tot_val = shares * share_val; }
public:
  void acquire(const std::string &co,long n, double pr);
  void buy(long num, double price);
  void shell(long num,double price);
  coid update(double price);
  void show();
};

int main()
{
  Stock tony;
  Stock mary;
  return 0;
}
