#include<iostream>
#include<iomanip>
#include "student.h"

using std::cout;
using std::left;
using std::setw;

student::student()
{
	this->studentID = "";
	this->Fname = "";
	this->Lname = "";
	this->eMail = "";
	for (int i = 0;i < days2CompleteArray;i++) this->days2[i] = 0;
	this->age = "";


}

string getStudentID()
{
	return studentID;
}

string getFname()
{
	return Fname;
}

string getLname()
{
	return Lname;
	}

string email()
{
	return email;
}

int getage()
{
	return 0;
}

int* getdays2()
{
	return nullptr;
}

void setStudentID(string studentID)
{
}

void setFname(string Fname)
{
}

void setLname(string Lname)
{
}

void setemail(string eMail)
{
}

void setage(int age)
{
}

void setdays2(int days2[])
{
}
