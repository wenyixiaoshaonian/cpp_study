#pragma once

#include "string"
#include "iostream"
#include "Admin.h"
#include "Student.h"
#include "list"
class System
{
private:
	std::list<Admin> adm;
	std::list<Student> stud;
	static int count_adm;
	static int count_stud;

public:
	void System_enter();		//系统登录界面
	void Admin_view();			//管理员界面
	void Student_view(Student & s);		//学生界面

	void exit_sys();			//退出系统
	void back_view();			//返回上一级菜单
	void add_ad();				//添加管理员
	void save_ad();				//保存管理员信息
	void add_stu();				//添加学生
	void save_stu();			//保存学生信息
	int ad_goin();				//管理员登录
	int stu_goin();			//学生登录

	//管理员功能
	void check_stu_all();										//查看所有学生信息
	int check_stu_name(const std::string stu_name);					//按名字查找学生信息
	int check_stu_id(const std::string stu_id);						//按学号查找学生信息
	int remove_stu(const std::string stu_id);						//删除对应学号学生信息

	//学生功能
	void change_passwd(const std::string stu_id);					//修改密码
};


