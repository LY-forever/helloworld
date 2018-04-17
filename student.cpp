﻿#include"student.h"
int Student::count=0;
Student::Student()
{
	name=NULL;
	age=0;
}

Student::Student(char *na,char *id,char *num,char *spec,int ag)
{
	if(na)
	{
		name=new char[strlen(na)+1];								//避免浅拷贝
		strcpy(name,na);
	}
	strcpy(ID,id);
	strcpy(number,num);
	strcpy(speciality,spec);
	age=ag;
	count++;
}

Student::Student(const Student &per)
{
	if(per.name)
	{
		name=new char[strlen(per.name)+1];
		strcpy(name,per.name);
	}
	strcpy(ID,per.ID);
	strcpy(number,per.number);
	strcpy(speciality,per.speciality);
	age=per.age;
	count++;
}

Student::~Student()
{
	if(name)
	{
		cout<<"disCon"<<endl;
		if(name)
			delete []name;
		cout--;
	}
}

char *Student::GetName()const
{
	return name;
}

char*Student::GetID()
{
	return ID;
}

int Student::GetAge()
{
	return age;
}

char* Student::GetSpec()
{
	return speciality;
}

char* Student::GetNumber()
{
	return number;
}

void Student::Display()
{
	cout<<"姓名:"<<name<<endl;
	cout<<"身份证:"<<ID<<endl;
	cout<<"学号:"<<number<<endl;
	cout<<"专业:"<<speciality<<endl;
	cout<<"年龄:"<<age<<endl<<endl;
}

void Student::Input()
{
	char na[10];
	cout<<"输入姓  名:";
	cin>>na;
	if(name)
		delete []name;
	name=new char[strlen(na)+1];
	strcpy(name,na);
	cout<<"输入身份证:";
	cin>>ID;
	cout<<"输入年  龄:";
	cin>>age;
	cout<<"输入专  业:";
	cin>>speciality;
	cout<<"输入学  号:";
	cin>>number;
	count++;					//adding this word,the number of student add when input one
}

void Student::Insert()			//adding(second)
{
	if(!age)					
		Input();
}

void Student::Delete()			//adding(second)
{
	age=0;
	cout--;
}

int Student::GetCount()
{
		return count;
}
	

