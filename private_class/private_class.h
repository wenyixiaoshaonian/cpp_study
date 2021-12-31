#ifndef PRAV_H_
#define PRAV_H_
#include <iostream>
#include <valarray>

class Student : private std::string , private std::valarray<double>
{
private:
  typedef std::valarray<double> ArrayB;
  using ArrayB::max;
  using ArrayB::min;
  using ArrayB::size;
public:
  Student(void) : std::string("null"),ArrayB() {}
  explicit Student(int n)    : std::string("null"), ArrayB(n) {}
  Student(const std::string & s,int n)    : std::string(s), ArrayB(n) {}
  Student(const std::string & s,double b,int n)    : std::string(s), ArrayB(b,n) {}
  Student(const std::string & s,const ArrayB & n) : std::string(s), ArrayB(n) {}

  ~Student() {std::cout << "Bye~\n";}

  void show() {std::cout << "student name is : " << (const std::string & ) *this << std::endl;
                std::cout << "source : " << ((const ArrayB &)*this)[0] << std::endl;};

  void show_so(int n);
};
#endif