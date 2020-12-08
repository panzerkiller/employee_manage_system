#include "manager.h"

//constructro
Manager::Manager(int id, string name, int Did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = Did;
}

//show info
void Manager::showInfo()
{
	cout << "Employee ID:	" << this->m_Id
		<< "\tEmployee name:	" << this->m_Name
		<< "\tEmplyee Department:	" << this->getDeptName()
		<< "\tDuty:\tFulfill Boss's task, assign tasks." << endl;
}

//get department name
string Manager::getDeptName()
{
	return string("Manager");

}