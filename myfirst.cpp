// my first cpp
#include <iostream>

int main()
{
    using namespace std;

    float test = 15.3425;
    int valu;
    char name[20];
    char num[20];
//    char * test = "abc";
    cout << "my first cpp....";
    cout << endl;
    cout << "please enter a num:\n";
//    cin.getline(name,20);
//    cin.get(name,20).get();
//    cin.get();
//    cin.get(num,20);
    cin >> test;
    cin >> valu;
    cout << "test is " << test << "valu is " << valu << endl;
//    cout << "your name is " << name << " num is " << num << endl;

//    cin >> valu;
//    cout << valu << endl;           //十进制
//    cout << hex << valu << endl;    //十六进制
//    cout << oct << valu << endl;    //八进制
    return 0;
}
