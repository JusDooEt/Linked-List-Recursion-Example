/*************************************************
* Program: Lab #6b - Student.h
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/
#include <string>
#include <iostream>
using namespace std;

struct Student
{
	int id;
	string name;
	Student* next;
};