#pragma once
#include "degree.h"

class Student;

class NetworkStudent;
class SecurityStudent;
class SoftwareStudent;

extern Student* initSec(string*);
extern Student* initNet(string*);
extern Student* initSof(string*);

class Student
{
public:
	friend class NetworkStudent;
	friend class SecurityStudent;
	friend class SoftwareStudent;

	enum Degree
	{
		notSpecified = 0,
		SECURITY,
		NETWORKING,
		SOFTWARE
	};
	Student();
	Student(string[]);
private:
	string studentId;
	string firstName;
	string lastName;
	string emailAdrs;
	int age;
	string numDays1;
	string numDays2;
	string numDays3;
	string degreeName;
public:
	string getStudentId() { return studentId; }
	string getFirstName() { return firstName; }
	string getLastName() { return lastName; }
	string getEmailAdrs() { return emailAdrs; }
	int getAge() { return age; }
	string getNumDays1() { return numDays1; }
	string getNumDays2() { return numDays2; }
	string getNumDays3() { return numDays3; }
	string getDegreeName() { return degreeName; }

	void putStudentId(string arg) { studentId = arg; }
	void putFirstName(string arg) { firstName = arg; }
	void putLastName(string arg) { lastName = arg; }
	void putEmailAdrs(string arg) { emailAdrs = arg; }
	void putAge(int arg) { age = arg; }
	void putNumDays1(string arg) { numDays1 = arg; }
	void putNumDays2(string arg) { numDays2 = arg; }
	void putNumDays3(string arg) { numDays3 = arg; }
	void putDegreeName(string arg) { degreeName = arg; }

	virtual void print();
	virtual void getDegreeProgram();


	~Student();
};
