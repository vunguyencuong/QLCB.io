#include"Engineer.h"
using namespace std;

void Engineer::setCanbo()
{
	cin.ignore();
	Person::setCanbo();
	cout << "Nganh dao tao: ";
	getline(cin, nganhdaotao);
	cout << "So nam kinh nghiem: ";
	cin >> experience;
}
void Engineer::getCanbo()
{
	Person::getCanbo();
	cout << "Nganh dao tao: ";
	cout << nganhdaotao << endl;
	cout << "So nam kinh nghiem: ";
	cout << experience << endl;
}
int Engineer::getSalary()
{
	return experience * (Person::getSalary());
}