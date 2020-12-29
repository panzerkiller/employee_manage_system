#pragma once
#include <iostream>
#include <fstream>
#define FILENAME "empFile.txt"
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
class WorkerManager
{
public:
	//initialize number of workers

	//pointer stores pointers to workers



	//constructor
	WorkerManager();
	//show menu
	void Show_Menu();

	//exit program
	void ExitSystem();

	//number of workers
	int m_EmpNum;

	//pointer to worker array
	Worker ** m_EmpArray;

	//add worker
	void Add_Emp();

	//save to file
	void save();

	//check if file is empty
	bool m_FileIsEmpty;

	//get number of workers in exist file
	int get_EmpNum();

	//init employee
	void init_Emp();

	//display employee
	void show_Emp();

	//check if employee exist
	int IsExist(int id);

	//delete worker
	void Del_emp();

	//modify worker
	void Mod_Emp();

	//search for an employee
	void Find_Emp();

	//sort
	void Sort_Emp();

	//clear
	void Clear_Emp();
	//destructor
	~WorkerManager();
};