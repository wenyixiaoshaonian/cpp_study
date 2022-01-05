#include<iostream>

class auto_ptr
{
private:
  std::string str;
public:
  auto_ptr(const std::string s) : str(s) {std::cout << "auto_ptr obj created...\n";}
  ~auto_ptr(){std::cout << "auto_ptr obj delete...\n";}
  void show() {std::cout << "str: " << str << std::endl;}
};
