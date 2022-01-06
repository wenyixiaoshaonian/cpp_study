#pragma once

#include "string"
#include "iostream"
#include "Admin.h"
#include "Student.h"
#include "list"
class System
{
private:
	std::list<int> adm;
	std::list<int> stud;
	static int count_adm;
	static int count_stud;

public:
	void System_enter();		//系统登录界面
	void Admin_view();			//管理员界面
	void Student_view();		//学生界面

};


