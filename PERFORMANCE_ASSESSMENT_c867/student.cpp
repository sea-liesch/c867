#include<iostream>
#include<iomanip>
#include "student.h"
using namespace student;

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
//	this->age = 0;


}

student::student(string para_sID, string para_Fname, string para_Lname, string para_email, int para_age, int days2[])
{
	this->studentID = para_sID;
	this->Fname = para_Fname;
	this->Lname = para_Lname;
	this->email = para_email;
	this->age = para_age;

}

string student::getStudentID()
{
	return studentID;
}

string getFname()
{
	return student::Fname;
}

string getLname()
{
	return student::Lname;
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

student::~student()
{
}
