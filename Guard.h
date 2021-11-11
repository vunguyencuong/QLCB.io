#pragma once
#include"Person.h"
using namespace std;

class Guard: public Person
{
	int area;
public:
	void setCanbo();
	void getCanbo();
	int getSalary();
};