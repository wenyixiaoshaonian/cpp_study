#include <iostream>
#include <fstream>
#include <string>

int main()
{
    using namespace std;
    ofstream fout;
    ifstream fin;
    string file_name;
    string test = {"hello world.....\n"};
    char value[50];
#if 0
    cout << "please input file name to write\n";
    getline(cin,file_name);
    fout.open(file_name);
    fout << test;
    fout.close();
#endif
  cout << "please input file name to read\n";
  getline(cin,file_name);
  fin.open(file_name);
  if(!fin.is_open())
  {
    cout << "open file failed....\n";
    return 0;
  }
  while(fin.getline(value,50))
  {
    cout << "read result " << value << endl;
  }
  fin.close();

  return 0;
}
