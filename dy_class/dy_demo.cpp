#include "dy_demo.h"
#include "cstring"

int dy_demo::num_string = 0;  //初始化静态类成员

dy_demo::dy_demo(const char *str)
{
  len = strlen(str);
  name = new char [len + 1];
  strcpy(name,str);
  num_string++;
  std::cout << num_string << ": " << name << "creat success \n";
}

dy_demo::dy_demo()
{
  len = 3;
  name = new char [len + 1];
  strcpy(name,"C++");
  num_string++;
  std::cout << num_string << ": " << name << "creat success \n";
}

dy_demo::~dy_demo()
{
  std::cout << num_string << ": " << name << "delete success \n";
  num_string--;
  delete [] name;
}

std::ostream & operator<<(std::ostream & os,const dy_demo & s)
{
  os << s.name << std::endl;
  return os;
}
