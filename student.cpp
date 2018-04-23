#include"student.h"
//int Student::count=0;
Student::Student()
{
	age=0;
}

Student::Student(string na,string id,string num,string spec,int ag)
{
	name=na;
	ID=id;
	number=num;
	speciality=spec;
	age=ag;
}

Student::Student(const Student &per)
{
	name=per.name;
	ID=per.ID;
	number=per.number;
	speciality=per.speciality;
	age=per.age;
}

Student::~Student()
{
}

string Student::GetName()
{
	return name;
}

stringStudent::GetID()
{
	return ID;
}

int Student::GetAge()
{
	return age;
}

string Student::GetSpec()
{
	return speciality;
}

string Student::GetNumber()
{
	return number;
}

void Student::Display() const
{
	cout<<"姓名:"<<name<<endl;
	cout<<"身份证:"<<ID<<endl;
	cout<<"学号:"<<number<<endl;
	cout<<"专业:"<<speciality<<endl;
	cout<<"年龄:"<<age<<endl<<endl;
}

void Student::Input()
{
	cin.get();
	cout<<"输入姓  名:";
	getline(cin,name);
	cin.get();
	cout<<"输入身份证:";
	getline(cin,ID);
	cin.get();
	cout<<"输入学  号:";
	getline(cin,number);
	cin.get();
	cout<<"输入专  业:";
	getline(cin,speciality);
	cout<<"输入年  龄:";
	cin.get();
	cin>age;
}



