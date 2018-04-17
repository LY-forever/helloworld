#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
//#define SIZE 80
class Student
{
	char *name;				//name
	char ID[19];			//identity card
	char number[10];		//学号
	char speciality[20];    //专业
	int age;				//age
public:
	Student();
	Student(char *na,char *id,char *num,char *spec,int ag);
	Student(const Student &per);
	~Student();
	char* GetName();
	char* GetID();
	char* GetNumber();
	char* GetSpec();
	int GetAge();
	void Display();			//显示学生信息
	void Input();			//input the information of student
};
#endif