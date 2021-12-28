#include "pass_class.h"
using namespace std;

int main()
{
  Table_player play1("huang","xiaom",1,20,500);
  Rated_player play2(20,17,play1);
  Rated_player play3(50,15,"zhou","jiel",1,30,600);

  play1.name();
  play2.name();
  play3.name();

  play1.Show_years();
  play1.HanTable();

  play2.HanTable();
  return 0;
}
