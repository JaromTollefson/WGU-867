#pragma once
#include "student.h"

//Declare SoftwareStudent class
class SoftwareStudent : public Student
{
	Degree degreeType;
public:
	SoftwareStudent() {};
	SoftwareStudent(string[]);
	Degree getDegree() { return SOFTWARE; }
	void putDegree(Degree arg) { degreeType = arg; }

	//virtual print to print Student data
	void print();
	void getDegreeProgram();
};
