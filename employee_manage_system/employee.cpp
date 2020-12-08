#include "employee.h"



//constructor, initialize an employee object
Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Employee::showInfo()
{
	cout << "Employee ID:	" << this->m_Id
		<< "\tEmployee name:	" << this->m_Name
		<< "\tEmplyee Department:	" << this->getDeptName()
		<< "\tDuty: Fullfill tasks." << endl;
}

//get deparment name
string Employee::getDeptName()
{
	return string("Employee");
}
