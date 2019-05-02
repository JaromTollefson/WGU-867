#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#include "student.h"
#include "networkStudent.h"

Student* initNet(string* s)
{
	NetworkStudent *secs = new NetworkStudent(s);
	return secs;
}

NetworkStudent::NetworkStudent(string *s) :
	Student(s) {
	putDegree(NETWORKING);
}

void NetworkStudent::getDegreeProgram() { }

void NetworkStudent::print()
{
	cout << "Student ID: " << studentId << '\t'
		<< "First Name: " << firstName << '\t'
		<< "Last Name: " << lastName << '\t'
		<< "Age: " << age << '\t'
		<< "daysInCourse: " << numDays1 << ", "
		<< numDays2 << ", "
		<< numDays3 << '\t'
		<< "Degree Program: Network" << endl;
}

