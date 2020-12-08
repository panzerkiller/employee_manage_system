#pragma once
#include <iostream>
using namespace std;
#include <string>

class Worker
{
public:
	//display info
	virtual void showInfo() = 0;
	//get deparment name
	virtual string getDeptName() = 0;
	
	int m_Id;
	string m_Name;
	int m_DeptId;


};