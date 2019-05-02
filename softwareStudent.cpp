#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#include "student.h"
#include "softwareStudent.h"

Student* initSof(string *s)
{
	Student *secs = new SoftwareStudent(s);
	return secs;
};
SoftwareStudent::SoftwareStudent(string *s) :
	Student(s) {
	putDegree(SOFTWARE);
};

void SoftwareStudent::getDegreeProgram() {  }

void SoftwareStudent::print()
{
	cout << "Student ID: " << studentId << '\t'
		<< "First Name: " << firstName << '\t'
		<< "Last Name: " << lastName << '\t'
		<< "Age: " << age << '\t'
		<< "daysInCourse: " << numDays1 << ", "
		<< numDays2 << ", "
		<< numDays3 << '\t'
		<< "Degree Program: Software" << endl;
}
