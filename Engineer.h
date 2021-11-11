#pragma once
#include"Person.h"
using namespace std;

class Engineer: public Person
{
	string nganhdaotao;
	int experience;
public:
	void setCanbo();
	void getCanbo();
	int getSalary();
};
