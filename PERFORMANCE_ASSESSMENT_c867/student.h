#pragma once
#include <string>
#include "degree.h"
using namespace std;



class student
{
public:
	const static int days2CompleteArray = 3;
protected:
	string studentID;
	string Fname;
	string Lname;
	string eMail;
	int age;
	int days2[days2CompleteArray];
	studentType student;
	virtual studentType getstudentType() = 0;


public:

	student();

	student(string studentID, string Fname, string Lname, string email, int age, int days2[]);
};

string getStudentID();
string getFname();
string getLname();
string email();
int getage();
int* getdays2();

void setStudentID(string studentID);
void setFname(string Fname);
void setLname(string Lname);
void setemail(string eMail);
void setage(int age);
void setdays2(int days2[]);

virtual void print() = 0;

~student();



