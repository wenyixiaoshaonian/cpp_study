#include <iostream>
#include<cstring>
using namespace std;
int main()
{
#if 0
    const char * str1 = "Shanghai";
    int len1 = strlen(str1);
    int i;
    for (i = 1; i <= len1; i++) 
        cout.write(str1, i) << endl;
    for (i = len1; i > 0; i--)
        cout.write(str1, i) << endl;   

    cout << 'w' <<endl;
    cout.put('a').put(65.3) << endl;
#endif
    int src;
//    cout.fill('*');

    cout.width(12);
    cin >> hex >> src;
    hex(cout);
    left(cout);
    cout.setf(ios_base::showpoint);
    cout.setf(ios_base::showbase);
    cout << src << endl;
 //   cout.width(12);
    cout.precision(4);
    oct(cout);
    cout << src <<endl;

    cout << dec << src << endl;
    return 0;
}