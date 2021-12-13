#include "stock.h"

using namespace std;

Stock::~Stock()
{
  cout << "Bye~\n";
}
Stock::Stock(void)
{
  company = "xiaomi2";
  shares = 0;
  share_val = 0;
  set_tot();
}
Stock::Stock(const std::string &co,long n, double pr)
{
  company = co;
  if(n < 0)
  {
    cout << "Number of shares can not less than 0. set shares to 0\n";
    shares = 0;
  }
  else
    shares = n;
  share_val = pr;
  set_tot();
}
void Stock::acquire(const std::string &co,long n, double pr)
{
  company = co;
  if(n < 0)
  {
    cout << "Number of shares can not less than 0. set shares to 0\n";
    shares = 0;
  }
  else
    shares = n;
  share_val = pr;
  set_tot();
}

void Stock::buy(long num, double price)
{
  if(num < 0)
    cout << "Number of shares can not less than 0";
  else
  {
    shares += num;
    share_val = price;
    set_tot();
  }
}

void Stock::sell(long num,double price)
{
  if(num < 0)
    cout << "Number of shares can not less than 0";
  else if(num > shares)
  {
    cout << "Number of shares can not more than shares: " << shares << endl;
  }
  else
  {
    shares -= num;
    share_val = price;
    set_tot();
  }
}

void Stock::update(double price)
{
  share_val = price;
  set_tot();
}

void Stock::show(void)
{
  cout << "Company: "   << company   << endl
       << "shares: "    << shares    << endl
       << "share_val: " << share_val << endl
       << "total_val: "   << total_val   << endl;
}

const Stock & Stock::topval(const Stock & s) const
{
  if (s.share_val > share_val)
    return s;
  else
    return *this;
}

Stock Stock::operator+(const Stock &s) const
{
  Stock res;
  res.share_val = s.share_val + share_val;
  return res;
}
int madd(int val,const Stock & s)
{
  int res;
  res = val + s.shares;
  return res;
}
Stock::operator long()
{
  return long (shares + 100);
}

ostream & operator<<(ostream & os,const Stock & s)
{
  os << s.shares << ">>>===111\n";
  return os;
}
