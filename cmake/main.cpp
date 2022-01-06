#include <iostream>
#include<cstring>
#include "Admin.h"
#include "Student.h"
#include "System.h"

using namespace std;

int main()
{
    Admin ad1("xiaoming","A1","A12345");
    Student std1("xiaohua","S1","S12345",0.82,"girl");
    System Sys;
    ad1.show();
    std1.show();

    std1.SetPasswd("xiaohua123");
    std1.show();
    Sys.System_enter();
    Sys.Admin_view();
    Sys.Student_view();
    return 0;
}