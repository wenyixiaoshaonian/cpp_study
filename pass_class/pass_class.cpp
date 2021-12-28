#include "pass_class.h"

using std::string;

//Table_player
Table_player::Table_player(const string & fn,const string & ln,bool ht,int ye,int mon):
                                                                firstname(fn),lastname(ln),hasTable(ht),years(ye),money(mon)
{
  std::cout << "Table_player creat success\n";
}

void Table_player::name() const
{
  std::cout << lastname << "-" << firstname << ": " << hasTable << std::endl;
}



//Rated_player
Rated_player::Rated_player(unsigned int r,unsigned int t,const string & fn,const string & ln,bool ht,int ye,int mon): Table_player(fn,ln,ht,ye,mon)
{
  std::cout << "Rated_player creat success\n";
  rating = r;
  Table_num = t;
}

Rated_player::Rated_player(unsigned int r,unsigned int t,const Table_player & tp): Table_player(tp),rating(r),Table_num(t)
{
  std::cout << "Rated_player creat success\n";
}

bool Rated_player::HanTable()
{
  int age = Show_years();
  std::cout << "age = " << age << std::endl;
  std::cout << "money = " << money << std::endl;
  if (Table_player::HanTable())
  {
    Table_num++;
    std::cout << "has " << Table_num << " tables \n";
    return true;
  }
  else
    std::cout << "has no tables...\n";
  return false;
}
