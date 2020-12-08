#include "workerManager.h"


WorkerManager::WorkerManager()
{
	//file not exist
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "empFile.txt file is not exist!" << endl;
		//initialize
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//file is empty
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "empFile.txt file is empty!" << endl;
		//initialize
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

}

//show menu
void WorkerManager::Show_Menu()
{
	cout << "*********************************************************" << endl;
	cout << "******Welcome to use employee management system**********" << endl;
	cout << "******1. Add an employee*********************************" << endl;
	cout << "******2. Display an employee*****************************" << endl;
	cout << "******3. Delete an employee******************************" << endl;
	cout << "******4. Modify an employee's information****************" << endl;
	cout << "******5. Search for an employee**************************" << endl;
	cout << "******6. Sort employee by number**************************" << endl;
	cout << "******7. Clear all data**********************************" << endl;
	cout << "******0. Exit Program************************************" << endl;
	cout << endl;


}

void WorkerManager::ExitSystem()
{
	cout << "Thanks for using!!" << endl;
	system("pause");
	exit(0); //call for exit function
}

//add worker
void WorkerManager::Add_Emp()
{
	cout << "Please input number of workers to add: " << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//add

		//calc new space size
		int newSize = this->m_EmpNum + addNum; // new space = original + newly add
		//call for new space
		Worker ** newSpace = new Worker* [newSize];
		//copy old data to new data
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
			//batch input
		for(int i=0; i<addNum ;i++)
			{
				int id;
				string name;
				int dSelect;

				cout << "Please input No." << i + 1 << " new worker's id:" << endl;
				cin >> id;
				cout << "Please input No." << i + 1 << " new worker's name:" << endl;
				cin >> name;
				cout << "Please select department: " << endl;
				cout << "1. Employee" << endl;
				cout << "2. Manager" << endl;
				cout << "3. Boss" << endl;
				cin >> dSelect;

				Worker* worker = NULL;

				switch (dSelect)
				{
				case 1:
					worker = new Employee(id, name, 1);
					break;
				case 2:
					worker = new Manager(id, name, 2);
					break;
				case 3:
					worker = new Boss(id, name, 3);
					break;
				default:
					break;
				}
				//store the worker pointer to an array
				newSpace[this->m_EmpNum + i] = worker;

			}
			delete[] this->m_EmpArray;
			//update new store address
			this->m_EmpArray = newSpace;
			//update new worker count
			this->m_EmpNum = newSize;
			cout << "Successfully added " << addNum << " workers!" << endl;
			//update file status
			this->m_FileIsEmpty = false;
			//save to file
			this->save();
	}
	else
	{
		cout << "Inccorrect input!!" << endl;
	}
	//press anykey to clear the scren
	system("pause");
	system("cls");
}


//save to file
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << "\t"
			<< this->m_EmpArray[i]->m_Name << "\t"
			<< this->m_EmpArray[i]->m_DeptId << "\t" << endl;
	}
	ofs.close();
}

WorkerManager::~WorkerManager()

{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}