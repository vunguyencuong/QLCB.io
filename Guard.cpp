#include"Guard.h"
using namespace std;

void Guard::setCanbo()
{
	Person::setCanbo();
	cout << "Khu vuc bao ve: (Nha kho: 1; Cong: 2; Nha may: 3; Ki tuc xa: 4)" << endl;
	cin >> area;
}
void Guard::getCanbo()
{
	Person::getCanbo();
	cout << "Khu vuc bao ve: ";
	if (area == 1) cout << "Nha kho" << endl;
	else if (area == 2) cout << "Cong" << endl;
	else if (area == 3) cout << "Nha may" << endl;
	else cout << "Ki tuc xa" << endl;
}int Guard::getSalary()
{
	return (Person::getSalary());
}