#include "private_class.h"


int main()
{
//  std::valarray<double>dou = {1,2,3,4};
  Student std1("xiaoming",23.456,2);
//  Student std2("huahua",dou);
  std1.show(); 
  std1.show_so(1); 
//  std::cout << std1.size << std::endl;
  return 0;
}