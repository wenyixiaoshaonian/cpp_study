#ifndef STOCL_H_
#define STOCL_H_
#include <string>
#include <iostream>

class Stock
{
private:
  std::string company;
  long shares;
  double share_val;
  double total_val;
  void set_tot() { total_val = shares * share_val; }
public:
  Stock();
  ~Stock();
  Stock(const std::string &co,long n = 0, double pr = 0.0);
  void acquire(const std::string &co,long n, double pr);
  void buy(long num, double price);
  void sell(long num,double price);
  void update(double price);
  void show();
  const Stock & topval(const Stock & s) const;
  Stock operator+(const Stock &s) const;    //运算符重载
  friend std::ostream & operator<<(std::ostream & os,const Stock & s); //<< 重载
  friend int madd(int val,const Stock & s); //友元函数
  operator long();                           //转换函数
};
#endif
