#include"Worker.h"
using namespace std;

void Worker::setCanbo()
{
	Person::setCanbo();
	cout << "Bac cua cong nhan: ";
	cin >> step;
}
void Worker::getCanbo()
{
	Person::getCanbo();
	cout << "Bac cua cong nhan: ";
	cout << step << endl;
}
int Worker::getSalary()
{
	return step * (Person::getSalary());
}