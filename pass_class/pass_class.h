#ifndef PASS_H_
#define PASS_H_
#include <string>
#include <iostream>

using std::string;
//基类
class Table_player
{
private:
  string firstname;
  string lastname;
  int years;
  bool hasTable;
public:
  Table_player(const string & fn = "none",const string & ln = "none",bool ht = false,int ye = 0);
  void name() const;
  virtual bool HanTable() const { std::cout << "Table_player hasTable : " << hasTable << std::endl;return hasTable;};
  int Show_years() const { std::cout << "Table_player years : " << years << std::endl; return years;};
  void ResetTable(bool v) {hasTable = v;};
};

class Rated_player : public Table_player
{
private:
  unsigned int rating;
  unsigned int Table_num;
public:
  Rated_player(unsigned int r,unsigned int t,const string & fn = "none",const string & ln = "none",bool ht = false,int ye = 0);
  Rated_player(unsigned int r,unsigned int t,const Table_player & tp);
  unsigned int Rating() const { return rating;};    //新增成员
  void ResetRating(unsigned int r) {rating = r;};   //新增成员
  virtual bool HanTable();                          //虚函数
};
#endif
