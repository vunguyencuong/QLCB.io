#pragma once
#include"Person.h"
using namespace std;

class Worker: public Person
{
	int step;
public:
	Worker();
	Worker(int);
	void setCanbo();
	void getCanbo();
	int getSalary();
};