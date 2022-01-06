#include "System.h"

int System::count_adm = 0;
int System::count_stud = 0;

void System::System_enter()		//系统登录界面
{
	using std::cout;
	using std::endl;
	cout << "*********************" << endl;
	cout << "学生个数   :" << count_stud<< endl;
	cout << "管理员个数 :" << count_adm<< endl;

	cout << "*********************" << endl;
	cout << "添加管理员\n";
	cout << "添加学生\n";
	cout << "进入管理员界面\n";
	cout << "进入学生界面\n";
	cout << "退出 \n";
	cout << "*********************" << endl;
}
void System::Admin_view()			//管理员界面
{
	using std::cout;
	using std::endl;
	cout << "*********************" << endl;
	cout << "查看所有学生信息\n";
	cout << "按名字查找学生信息\n";
	cout << "按学号查找学生信息\n";
	cout << "录入学生信息\n";
	cout << "删除对于学号学生信息\n";
	cout << "返回上一级菜单\n";
	cout << "*********************" << endl;
}
void System::Student_view()		//学生界面
{
	using std::cout;
	using std::endl;
	cout << "*********************" << endl;
	cout << "查看信息\n";
	cout << "修改密码\n";
	cout << "返回上一级菜单\n";
	cout << "*********************" << endl;
}