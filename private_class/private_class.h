#ifndef PRAV_H_
#define PRAV_H_
#include <iostream>
#include <valarray>

class Student : private std::string , private std::valarray<double>
{
private:
  typedef std::valarray<double> ArrayB;

public:
  Student(void) : std::string("null"),ArrayB() {}
  explicit Student(int n)    : std::string("null"), ArrayB(n) {}
  Student(const std::string & s,int n)    : std::string(s), ArrayB(n) {}
  Student(const std::string & s,const ArrayB & n) : std::string(s), ArrayB(n) {}

  ~Student() {std::cout << "Bye~\n";}

  void show() {std::cout << "student name is : " << (const std::string & ) *this << std::endl;};
};
#endif
