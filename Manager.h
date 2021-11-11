#pragma once
#include"Worker.h"
#include"Engineer.h"
#include"Guard.h"
#include<vector>
using namespace std;

class Manager
{
	vector<Worker> workers;
	vector<Engineer> engineers;
	vector<Guard> guards;
public:
	void setCanbo();
	void findName();
	void solveSalary();
};