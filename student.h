#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;				//name
	char ID[19];			//identity card
	char number[10];		//学号
	char speciality[20];    //专业
	int age;				//age
	static int count;		//实际有效的学生个数，小于等于对象的个数
public:
	Student();
	Student(char *na,char *id,char *num,char *spec,int ag);
	Student(const Student &per);
	~Student();
	char* GetName() const;	//define const function
	char* GetID();			//can't be const function
	char* GetNumber();		//same up
	char* GetSpec();		//same up
	int GetAge() const;
	void Display() const;	//显示学生信息
	void Input();			//input the information of student
	void Insert();
	void Delete();
	static int GetCount();	//new adding static function
};
#endif