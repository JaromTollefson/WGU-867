#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

#include "student.h"
#include "roster.h"

extern string studentDataStrings[9];
std::vector<Roster*> classRosterArray;

void Roster::remove(string arg) {
	for (int i = 0; i < classRosterArray.size(); i++) {
		Roster* p = classRosterArray[i];
		if (p->getStudentId() != arg) { continue; }
		p->~Roster();                   

		classRosterArray.erase(classRosterArray.begin() + i); 
		return;
	}
	cout << "Oops! We couldn't find a student with the Student ID " << arg << "." << endl;
}

void Roster::printAll() {
	for (int i = 0; i < classRosterArray.size(); i++) {
		classRosterArray[i]->print();
	}
}

void Roster::printDaysInCourse(string arg) {
	for (int i = 0; i < classRosterArray.size(); i++) {
		Roster* p = classRosterArray[i];
		if (p->studentID != arg) 
			continue;
		int avgCourseDays = (
			(p->getNumDays1())
			+ (p->getNumDays2())
			+ (p->getNumDays3())) / 3;
		cout << avgCourseDays << endl;
	}
}
void Roster::print() {
	cout << "\tFirst Name: " << firstName;
	cout << "\tLast Name: " << lastName;
	cout << "\tAge: " << age;
	cout << "\tDaysInCourse: {";
	cout << numDays1 << ", ";
	cout << numDays2 << ", ";
	cout << numDays3 << "} ";
	cout << "Degree Program: " << degreeName << endl; 
}
void Roster::printInvalidEmails() {
	for (int i = 0; i < classRosterArray.size(); i++) {
		Roster* p = classRosterArray[i];
		bool emailIsValid = true;

		if (p->getEmailAdrs().find('@') == string::npos) {
			emailIsValid = false;
		}
		else if (p->getEmailAdrs().find(' ') != string::npos) {
			emailIsValid = false;
		}
		else if (p->getEmailAdrs().find('.') == string::npos) {
			emailIsValid = false;
		}
		if (!emailIsValid) {
			cout << "INVALID: " << classRosterArray[i]->getEmailAdrs() << endl;
		}
	}
}

void Roster::printByDegreeProgram(Degree arg) {
	for (int i = 0; i < classRosterArray.size(); i++) {
		if (classRosterArray[i]->degreeName != arg) {
			continue;
		}
		else {
			classRosterArray[i]->print();
		}
	}
}

void Roster::add(
	string _studentID,
	string _firstName,
	string _lastName,
	string _emailAdrs,
	int    _age,
	int    _numDays1,
	int    _numDays2,
	int    _numDays3,
	Degree _degreeName)
{
	studentID = _studentID;
	firstName = _firstName;
	lastName = _lastName;
	emailAdrs = _emailAdrs;
	age = _age;
	numDays1 = _numDays1;
	numDays2 = _numDays2;
	numDays3 = _numDays3;
	degreeName = _degreeName;
}

extern void setupStudent();
int main() {
	setupStudent(); 
	Roster* pRoster = 0;
	pRoster = new Roster;
	pRoster->add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
	classRosterArray.push_back(pRoster);
	pRoster = new Roster;
	pRoster->add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORKING);
	classRosterArray.push_back(pRoster);
	pRoster = new Roster;
	pRoster->add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
	classRosterArray.push_back(pRoster);
	pRoster = new Roster;
	pRoster->add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
	classRosterArray.push_back(pRoster);
	pRoster = new Roster;
	pRoster->add("A5", "Kayla", "Butler", "kbutl92@wgu.edu", 28, 60, 30, 15, SOFTWARE);
	classRosterArray.push_back(pRoster);

	cout << "Course Title: " << "C867 Scripting and Programming Applications" << endl;
	cout << "Programmed in: " << "C++" << endl;
	cout << "Student ID: " << "000892627" << endl;
	cout << "Name: " << "Jarom Tollefson" << endl;


	pRoster->printAll();

	cout << "\nInvalid email addresses:" << endl;
	pRoster->printInvalidEmails();

	
	cout << "\nAverage days in course for Student A3:" << endl;
	pRoster->printDaysInCourse("A3");

	cout << "\nPrinting SOFTWARE students...:" << endl;
	pRoster->printByDegreeProgram(SOFTWARE);

	cout << "\nPrinting NETWORKING students...:" << endl;
	pRoster->printByDegreeProgram(NETWORKING);

	cout << "\nPrinting SECURITY students...:" << endl;
	pRoster->printByDegreeProgram(SECURITY);

	cout << "\nRemoving Student A3..." << endl;
	pRoster->remove("A3");
	
	cout << "\nRemoving Student A3 again..." << endl;
	pRoster->remove("A3");
	
