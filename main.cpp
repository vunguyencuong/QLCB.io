#include"Manager.h"
using namespace std;

int main()
{
	Manager manager;
	int key = -1;
	while (key != 0)
	{
		cout << "==========MENU==========" << endl;
		printf("\t1.Them moi can bo\n");
		printf("\t2.Tim kiem theo ten\n");
		printf("\t3.Tinh luong\n");
		cin >> key;
		if (key == 1)
		{
			manager.setCanbo();
		}
		else if (key == 2)
		{
			manager.findName();
		}
		else
		{
			manager.solveSalary();
		}
	}
	cout << "Chuong trinh ket thuc!" << endl;
}