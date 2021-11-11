#include"Manager.h"
using namespace std;

void Manager::setCanbo()
{
	cout << "Loai can bo muon them: (1.Cong nhan; 2.Ki su; 3.Bao ve)" << endl;
	int key; cin >> key;
	cin.ignore();
	if (key == 1)
	{
		Worker res1;
		res1.setCanbo();
		res1.setId(workers.size() + 1);
		res1.setJob("CN");
		workers.push_back(res1);
	}
	else if (key == 2)
	{
		Engineer res2;
		res2.setCanbo();
		res2.setId(engineers.size() + 1);
		res2.setJob("KS");
		engineers.push_back(res2);
	}
	else
	{
		Guard res3;
		res3.setCanbo();
		res3.setId(guards.size() + 1);
		res3.setJob("BV");
		guards.push_back(res3);
	}
}
void Manager::findName()
{
	cout << "Nhap ten can tim kiem: ";
	string res; cin >> res;
	cin.ignore();
	for (int i = 0; i < workers.size(); i++)
	{
		if (res == workers[i].getName())
		{
			workers[i].getCanbo();
		}
	}
	for (int i = 0; i < engineers.size(); i++)
	{
		if (res == engineers[i].getName())
		{
			engineers[i].getCanbo();
		}
	}
	for (int i = 0; i < guards.size(); i++)
	{
		if (res == guards[i].getName())
		{
			guards[i].getCanbo();
		}
	}
}
void Manager::solveSalary()
{
	int sum_salary = 0; 
	cout << "Ban muon tinh luong cua: (1.Cong nhan; 2.Ki su; 3.Bao ve)" << endl;
	int key; cin >> key;
	cin.ignore();
	if (key == 1)
	{
		for (int i = 0; i < workers.size(); i++)
		{
			sum_salary += workers[i].getSalary();
		}
	}
	else if (key == 2)
	{
		for (int i = 0; i < engineers.size(); i++)
		{
			sum_salary += engineers[i].getSalary();
		}
	}
	else
	{
		for (int i = 0; i < guards.size(); i++)
		{
			sum_salary += guards[i].getSalary();
		}
	}
	cout << "Tong luong can tinh: ";
	cout << sum_salary << endl;
}	