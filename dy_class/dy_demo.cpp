#include "dy_demo.h"
#include "cstring"

int dy_demo::num_string = 0;  //初始化静态类成员

dy_demo::dy_demo(const char *str)
{
  test = 0;
  len = strlen(str);
  name = new char [len + 1];
  strcpy(name,str);
  num_string++;
  std::cout << num_string << ": " << name << " creat success \n";
}

dy_demo::dy_demo(const int num): test(num)
{
  len = 3;
  name = new char [len + 1];
  strcpy(name,"C++");
  num_string++;
  std::cout << num_string << ": " << name << " creat success \n";
}

dy_demo::dy_demo()
{
  test = 0;
  len = 3;
  name = new char [len + 1];
  strcpy(name,"C++");
  num_string++;
  std::cout << num_string << ": " << name << " creat success \n";
}

dy_demo::dy_demo(const dy_demo & s)   //赋值构造函数
{
  test = 0;
  len = s.len;
  name = new char [len + 1];
  strcpy(name,s.name);
  num_string++;
  std::cout << num_string << ": " << name << " creat success \n";
}

dy_demo::~dy_demo()
{
  std::cout << num_string << ": " << name << " delete success \n";
  num_string--;
  delete [] name;
}

std::ostream & operator<<(std::ostream & os,const dy_demo & s)
{
  os << s.name << std::endl;
  os << s.name << std::endl;
  return os;
}

dy_demo & dy_demo::operator=(const dy_demo & s2)    //赋值运算符重载
{
  if (this == &s2)
    return *this;
  len = s2.len;
  name = new char [len + 1];
  std::strcpy(name,s2.name);
  num_string++;
  std::cout << num_string << ": " << name << " creat success \n";
  return *this;
}
