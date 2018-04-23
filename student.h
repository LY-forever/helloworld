#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	string name;				//name
	string ID;			//identity card
	string number;		//学号
	string speciality;    //专业
	int age;				//age
	//static int count;		//实际有效的学生个数，小于等于对象的个数
public:
	Student();
	Student(string na,string id,string num,string spec,int ag);
	Student(const Student &per);
	~Student();
	string GetName() ;	//define const function
	string GetID();			//can't be const function
	string GetNumber();		//same up
	string GetSpec();		//same up
	int GetAge();
	void Display() const;	//显示学生信息
	void Input();			//input the information of student
	void Insert();
	
};
#endif