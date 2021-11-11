#include"Person.h"
using namespace std;

void Person::setCanbo()
{
	cin.ignore();
	cout << "Ho: ";
	cin >> firstname;
	cout << "Ten: ";
	cin>> name;
	cout << "Tuoi: ";
	cin >> age;
	cout << "Gioi tinh: (Nam: X, Nu: Y, Khac: Z)";
	cin >> gender;
	cout << "Dia chi: ";
	getline(cin, address);
	cout << "Sdt: ";
	cin >> phone;
	cout << "Que quan: ";
	cin >> hometown;
	cout << "He so luong: ";
	cin >> factor;
	cout << "So ngay cong: ";
	cin >> daywork;
}

void Person::getCanbo()
{
	cout << "Ho: ";
	cout << firstname << endl;
	cout << "Ten: ";
	cout << name << endl;
	cout << "Tuoi";
	cout << age << endl;
	cout << "Gioi tinh: ";
	if (gender == "X") cout << "Nam" << endl;
	else if (gender == "Y") cout << "Nu" << endl;
	else cout << "Khac" << endl;
	cout << "Dia chi: "; cout << address << endl;
	cout << "Sdt: "; cout << phone << endl;
	cout << "Que quan: "; cout << hometown << endl;
	cout << "He so luong: "; cout << factor << endl;
	cout << "So ngay cong: "; cout << daywork << endl;
}

string Person::getName()
{
	return name;
}
void Person::setJob(string _job)
{
	this->job = _job;
}
void Person::setId(int _id)
{
	this->id = _id;
}
int Person::getSalary()
{
	return this->factor * this->daywork;
}
