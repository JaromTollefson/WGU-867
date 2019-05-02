#pragma once
#include <string>
//#include "securityStudent.h"
//#include "networkStudent.h"
//#include "softwareStudent.h"

class Roster {
	string studentID;
	string firstName;
	string lastName;
	string emailAdrs;
	int age;
	int numDays1;
	int numDays2;
	int numDays3;
	Degree degreeName;
public:
	//gets for each instance variable from Student
	string getStudentId() { return studentID; }
	string getFirstName() { return firstName; }
	string getLastName() { return lastName; }
	string getEmailAdrs() { return emailAdrs; }
	int getAge() { return age; }
	int getNumDays1() { return numDays1; }
	int getNumDays2() { return numDays2; }
	int getNumDays3() { return numDays3; }
	Degree getDegreeName() { return degreeName; }
												  //puts for each instance variable from Student
	void putStudentID(string arg) { studentID = arg; }
	void putFirstName(string arg) { firstName = arg; }
	void putLastName(string arg) { lastName = arg; }
	void putEmailAdrs(string arg) { emailAdrs = arg; }
	void putAge(int arg) { age = arg; }
	void putNumDays1(int arg) { numDays1 = arg; }
	void putNumDays2(int arg) { numDays2 = arg; }
	void putNumDays3(int arg) { numDays3 = arg; }
	void putDegreeName(Degree arg) { degreeName = arg; }

	void add(string studentID,
		string firstName,
		string lastName,
		string emailAdrs,
		int age,
		int numDays1,
		int numDays2,
		int numDays3,
		Degree degreeName);

	void remove(string studentId);
	void printAll();
	void print();
	void printDaysInCourse(string studentId);
	void printInvalidEmails();
	void printByDegreeProgram(Degree);
};
