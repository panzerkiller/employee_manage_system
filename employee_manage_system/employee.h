#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Employee :public Worker
{
public:
	//constructor
	Employee(int id, string name, int dId);
	//display info
	virtual void showInfo();
	//get deparment name
	virtual string getDeptName();

};