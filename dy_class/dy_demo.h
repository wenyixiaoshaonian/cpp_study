#ifndef STOCL_H_
#define STOCL_H_
#include <string>
#include <iostream>

class dy_demo
{
private:
  char *name;
  int len;
  static int num_string;
  int test;
public:
  dy_demo();
  dy_demo(const int num);
  dy_demo(const char *str);
  dy_demo(const dy_demo & s);
  ~dy_demo();
  friend std::ostream & operator<<(std::ostream & os,const dy_demo & s);
  dy_demo & operator=(const dy_demo & s2);
};

#endif
