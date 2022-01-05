#include "auto_ptr.h"
#include "memory"
int main()
{
  std::auto_ptr<auto_ptr> pr(new auto_ptr("using auto_ptr....."));
  pr->show();
  return 0;
}
