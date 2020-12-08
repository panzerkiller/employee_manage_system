#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Manager :public Worker
{
public:
	//constructor
	Manager(int id, string name, int dId);
	//display info
	virtual void showInfo();
	//get deparment name
	virtual string getDeptName();

};