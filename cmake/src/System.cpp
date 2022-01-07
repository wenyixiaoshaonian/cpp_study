#include "System.h"
#include "fstream"
#include <cstdlib>
int System::count_adm = 0;
int System::count_stud = 0;

using namespace std;
void System::System_enter()		//系统登录界面
{
	int choise;
	while(1)
	{
		cout << "*********************" << endl;
		cout << "学生个数   :" << count_stud<< endl;
		cout << "管理员个数 :" << count_adm<< endl;

		cout << "*********************" << endl;
		cout << "1、添加管理员\n";
		cout << "2、管理员身份登录\n";
		cout << "3、学生身份登录\n";
		cout << "4、退出系统 \n";
		cout << "*********************" << endl;


		cin >> choise;
		if(choise < 1 || choise > 4)
			cout << "请输入1-4选项\n";

		switch(choise)
		{
		case 1:
			add_ad();
			break;
		case 2:
			ad_goin();
			break;
		case 3:
			stu_goin();
			break;
		case 4:
			exit_sys();
			break;
		default:
			cout << "请输入1-4选项";
			break;
		}
	}

}
void System::Admin_view()			//管理员界面
{
	int choise;
	string stu_name,stu_id;
	while(1)
	{
		cout << "*********************" << endl;
		cout << "1、查看所有学生信息\n";
		cout << "2、按名字查找学生信息\n";
		cout << "3、按学号查找学生信息\n";
		cout << "4、录入学生信息\n";
		cout << "5、删除对应学号学生信息\n";
		cout << "6、返回上一级菜单\n";
		cout << "*********************" << endl;

		cin.sync();
		cin >> choise;
		if(choise < 1 || choise > 6)
			cout << "请输入1-4选项\n";

		switch(choise)
		{
		case 1:
			check_stu_all();
			break;
		case 2:
			cin.ignore(1);
			cout << "请输入学生名称\n";
			getline(cin,stu_name);
			check_stu_name(stu_name);
			break;
		case 3:
			cin.ignore(1);
			cout << "请输入学生ID\n";
			getline(cin,stu_id);
			check_stu_id(stu_id);
			break;
		case 4:
			add_stu();
			break;
		case 5:
			cin.ignore(1);
			cout << "请输入学生ID\n";
			getline(cin,stu_id);
			remove_stu(stu_id);
			break;
		case 6:
			back_view();
			break;
		default:
			cout << "请输入1-6选项";
			break;
		}
	}	
}
void System::Student_view(Student & s)		//学生界面
{
	int choise;
	while(1)
	{
		cout << "*********************" << endl;
		cout << "1、查看信息\n";
		cout << "2、修改密码\n";
		cout << "3、返回上一级菜单\n";
		cout << "*********************" << endl;

		cin >> choise;
		if(choise < 1 || choise > 3)
			cout << "请输入1-4选项\n";

		switch(choise)
		{
		case 1:
			s.show();
			break;
		case 2:
			change_passwd(s.GetId());
			break;
		case 3:
			back_view();
			break;

		default:
			cout << "请输入1-3选项";
			break;
		}
	}
}

void System::exit_sys()			//退出系统
{

	cout << "*********************" << endl;
	cout << "退出系统，欢迎使用！" << endl;
	cout << "*********************" << endl;
	exit(0);
}
void System::back_view()			//返回上一级菜单
{
	System_enter();
}

void System::add_ad()				//添加管理员
{	
	string ad_name,ad_id,ad_passwd,ad_passwd2;

	cin.ignore(1);
	cout << "请输入管理员名称 ： \n";
	getline(cin,ad_name);
	cout << "请输入管理员id ： \n";
	getline(cin,ad_id);
into:
	cout << "请输入管理员密码 ： \n";
	getline(cin,ad_passwd);
	cout << "请再次输入管理员密码 ： \n";
	getline(cin,ad_passwd2);

	if(ad_passwd != ad_passwd2)
	{
		cout << "两次输入密码不一致，请重新输入 ： \n";
		goto into;
	}

	cout << "添加管理员成功\n";
	Admin ad_new(ad_name,ad_id,ad_passwd);
	adm.push_back(ad_new);
	count_adm++;
	save_ad();
}

void System::save_ad()				//保存管理员信息
{
	int i;
	ofstream fout;
	list<Admin>::iterator pd1;
	list<Admin>::iterator pd2;

	fout.open("admin.dat");			//保存管理员的文件，每次默认全部覆盖

	pd1 = adm.begin();
	pd2 = adm.end();

	fout << count_adm << endl;
	for(pd1;pd1!=pd2;pd1++)
	{
		fout << " Admin name: " << pd1->GetName() << endl
			 << " Admin id: " << pd1->GetId() << endl
			 << " Admin passwd: " << pd1->GetPasswd() << endl;
	}
	fout.close();
}

void System::add_stu()				//添加学生
{
	string stu_name,stu_id,stu_passwd,stu_passwd2,stu_sex;
	double stu_grade;

	cin.ignore(1);
	cout << "请输入学生名称 ： \n";
	getline(cin,stu_name);
	cout << "请输入学生id ： \n";
	getline(cin,stu_id);
into:
	cout << "请输入学生密码 ： \n";
	getline(cin,stu_passwd);
	cout << "请再次输入学生密码 ： \n";
	getline(cin,stu_passwd2);

	if(stu_passwd != stu_passwd2)
	{
		cout << "两次输入密码不一致，请重新输入 ： \n";
		goto into;
	}
	cout << "请输入学生性别 ： \n";
	getline(cin,stu_sex);
	cout << "请输入学生绩点 ： \n";
	cin >> stu_grade;

	cout << "添加学生成功\n";
	Student stu_new(stu_name,stu_id,stu_passwd,stu_grade,stu_sex);
	stud.push_back(stu_new);
	count_stud++;

	save_stu();
}

void System::save_stu()			//保存学生信息
{
	int i;
	ofstream fout;
	list<Student>::iterator pd1;
	list<Student>::iterator pd2;

	fout.open("student.dat");			//保存管理员的文件，每次默认全部覆盖

	pd1 = stud.begin();
	pd2 = stud.end();

	fout << count_stud << endl;
	for(pd1;pd1!=pd2;pd1++)
	{
		fout << " Student name: " << pd1->GetName() << endl
			 << " Student id: " << pd1->GetId() << endl
			 << " Student passwd: " << pd1->GetPasswd() << endl;
	}
	fout.close();
}

int System::ad_goin()				//管理员登录
{
	string ad_name,ad_id,ad_passwd;
	list<Admin>::iterator pd1;
	list<Admin>::iterator pd2;
	int flag = 0;

	pd1 = adm.begin();
	pd2 = adm.end();

	cin.ignore(1);
	cout << "请输入管理员id ： \n";
	getline(cin,ad_id);
	cout << "请输入管理员密码 ： \n";
	getline(cin,ad_passwd);

	for(pd1;pd1!=pd2;pd1++)
	{
		if(ad_id == pd1->GetId())
		{
			if(ad_passwd == pd1->GetPasswd())
				flag = 1;
		}
	}
	if(!flag)
	{
		cout << "没有这个用户或密码错误！\n";
		return -1;
	}
	else
	{
		Admin_view();	//进入管理员界面
	}

}

int System::stu_goin()			//学生登录
{

	string stu_name,stu_id,stu_passwd;
	list<Student>::iterator pd1;
	list<Student>::iterator pd2;
	int flag = 0;

	pd1 = stud.begin();
	pd2 = stud.end();

	cin.ignore(1);
	cout << "请输入学生id ： \n";
	getline(cin,stu_id);
	cout << "请输入学生密码 ： \n";
	getline(cin,stu_passwd);

	for(pd1;pd1!=pd2;pd1++)
	{
		if(stu_id == pd1->GetId())
		{
			if(stu_passwd == pd1->GetPasswd())
			{
				flag = 1;
				Student_view(*pd1);	//进入管理员界面
			}
		}
	}
	if(!flag)
	{
		cout << "没有这个用户或密码错误！\n";
		return -1;
	}
}

//管理员功能
void System::check_stu_all()					//查看所有学生信息
{
	list<Student>::iterator pd1;
	list<Student>::iterator pd2;

	pd1 = stud.begin();
	pd2 = stud.end();

	for(pd1;pd1!=pd2;pd1++)
	{
		pd1->show();
	}

}
int System::check_stu_name(const std::string stu_name)					//按名字查找学生信息
{
	list<Student>::iterator pd1;
	list<Student>::iterator pd2;

	pd1 = stud.begin();
	pd2 = stud.end();

	for(pd1;pd1!=pd2;pd1++)
	{
		if (stu_name == pd1->GetName())
		{
			pd1->show();
			return 0;
		}
	}
	cout << "没有查到该学生信息\n";
}
int System::check_stu_id(const std::string stu_id)					//按学号查找学生信息
{
	list<Student>::iterator pd1;
	list<Student>::iterator pd2;

	pd1 = stud.begin();
	pd2 = stud.end();

	for(pd1;pd1!=pd2;pd1++)
	{
		if (stu_id == pd1->GetId())
		{
			pd1->show();
			return 0;
		}
	}
	cout << "没有查到该学生信息\n";

}
int System::remove_stu(const std::string stu_id)						//删除对应学号学生信息
{
	list<Student>::iterator pd1;
	list<Student>::iterator pd2;

	pd1 = stud.begin();
	pd2 = stud.end();

	for(pd1;pd1!=pd2;pd1++)
	{
		if (stu_id == pd1->GetId())
		{
			stud.remove(*pd1);
			count_stud--;
			return 0;
		}
	}
	cout << "没有查到该学生信息\n";

}

//学生功能

void System::change_passwd(const std::string stu_id)					//修改密码
{
	list<Student>::iterator pd1;
	list<Student>::iterator pd2;
	string new_pwd,new_pwd2;

	pd1 = stud.begin();
	pd2 = stud.end();

	cin.ignore(1);
	for(pd1;pd1!=pd2;pd1++)
	{
		if (stu_id == pd1->GetId())
		{
		get:	
			cout << "请输入新密码：\n";
			getline(cin,new_pwd);
			cout << "请再次输入新密码：\n";
			getline(cin,new_pwd2);
			if(new_pwd == new_pwd2)
			{
				pd1->SetPasswd(new_pwd);
				cout << "修改密码成功\n";
			}
			else
			{
				cout << "两次密码不一致，请重新输入\n";
				goto get;
			}
		}
	}

}