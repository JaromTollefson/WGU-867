#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

#include "student.h"

const string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Kayla,Butler,kbutl92@wgu.edu,28,60,30,15,SOFTWARE" };

std::vector<Student*> classStudentArray;
string studentDataStrings[9];

Student::Student() { } 
Student::Student(string *s) :

	studentId(s[0]),
	firstName(s[1]),
	lastName(s[2]),
	emailAdrs(s[3]),
	age(atoi(s[4].c_str())), 
	numDays1(s[5]),
	numDays2(s[6]),
	numDays3(s[7])
{}

void Student::getDegreeProgram() {};
void Student::print()
{
	cout << "Student ID: " << studentId << '\t'
		<< "First Name: " << firstName << '\t'
		<< "Last Name: " << lastName << '\t'
		<< "Age: " << age << '\t'
		<< "daysInCourse: " << numDays1 << ", " << numDays2 << ", " << numDays3 << '\t'
		<< "Degree Program: " << degreeName
		<< endl;
}


Student::~Student() { }
void setup(string str) {
	int firstCharPosition = 0;
	int x = 0;
	int z = str.size();
	int i;
	for (i = 0; i < z; i++) {
		char c = str[i];
		if (c == ',') {
			int length = i - firstCharPosition;
			studentDataStrings[x] = str.substr(firstCharPosition, length);
			x++;
			firstCharPosition = i + 1;
		}
	}
	int length = i - firstCharPosition;
	studentDataStrings[x] = str.substr(firstCharPosition, length);

	Student *pObj = 0;
	if (studentDataStrings[8] == "SECURITY") {
		pObj = initSec(studentDataStrings);
	}
	else if (studentDataStrings[8] == "NETWORK") {
		pObj = initNet(studentDataStrings);
	}
	else if (studentDataStrings[8] == "SOFTWARE") {
		pObj = initSof(studentDataStrings);
	}
	classStudentArray.push_back(pObj);
}
void setupStudent() {
	for (int i = 0; i < 5; i++)
		setup(studentData[i]);
}
