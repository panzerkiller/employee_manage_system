#include <iostream>
#include "workerManager.h"
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
	////test code
	//Worker * worker = 0;
	//worker = new Employee(1, "James", 1);
	//worker->showInfo();
	//delete worker;
	//worker = new Manager(2, "John", 2);
	//worker->showInfo();
	//delete worker;
	//worker = new Boss(3, "Max", 3);
	//worker->showInfo();
	//delete worker;
	//instantiate an WorkerManager
	WorkerManager wm;

	int choice = 0;
	while (true)
	{
		//call for showmenu
		wm.Show_Menu();

		cout << "Please input your option:" << endl;
		cin >> choice; //receive use's choice

		switch (choice)
		{
		case 0:	//exit
			wm.ExitSystem();
			break;
		case 1: // add user
			wm.Add_Emp();
			break;
		case 2:	// display all
			wm.show_Emp();
			break;
		case 3: //	delete 1
			wm.Del_emp();
		break;
		
		case 4:	//	modify an employee
			wm.Mod_Emp();
			break;
		case 5: //	find an employee
			wm.Find_Emp();
			break;
		case 6: //	sort
			wm.Sort_Emp();
			break;
		case 7:	//	delete all
			wm.Clear_Emp();
			break;
		default:
			break;
		}


	}





	system("pause");
	return 0;
}