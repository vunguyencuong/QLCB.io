#pragma once
#include<iostream>
#include<string>
using namespace std;

class Person
{
	string firstname;
	string name;
	int age;
	string gender;
	string address;
	string phone;
	string hometown;
	string job;
	int id;
	int factor;
	int daywork;
public:
	//Person();
	//Person(string, string, int, string, string, string, string, string, int, int, int);
	void setCanbo();
	void getCanbo();
	void setJob(string);
	string getName();
	void setId(int );
	int getSalary();
};