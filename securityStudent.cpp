#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#include "student.h"
#include "securityStudent.h"

Student* initSec(string* s)
{
	SecurityStudent *secs = new SecurityStudent(s);
	return secs;
}

SecurityStudent::SecurityStudent(string *s) :
	Student(s)
{
	putDegree(SECURITY);
};

void SecurityStudent::getDegreeProgram() { }

void SecurityStudent::print()
{
	cout << "Student ID: " << studentId << '\t'
		<< "First Name: " << firstName << '\t'
		<< "Last Name: " << lastName << '\t'
		<< "Age: " << age << '\t'
		<< "daysInCourse: " << numDays1 << ", "
		<< numDays2 << ", "
		<< numDays3 << '\t'
		<< "Degree Program: Security" << endl;
}
