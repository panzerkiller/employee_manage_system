#include "boss.h"

//constructro
Boss::Boss(int id, string name, int Did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = Did;
}

//show info
void Boss::showInfo()
{
	cout << "Employee ID:	" << this->m_Id
		<< "\tEmployee name:	" << this->m_Name
		<< "\tEmplyee Department:	" << this->getDeptName()
		<< "\tDuty: Manage everything." << endl;
}

//get department name
string Boss::getDeptName()
{
	return string("President");

}