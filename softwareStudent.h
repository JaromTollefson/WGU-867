#pragma once
#include "student.h"

class SoftwareStudent : public Student
{
	Degree degreeType;
public:
	SoftwareStudent() {};
	SoftwareStudent(string[]);
	Degree getDegree() { return SOFTWARE; }
	void putDegree(Degree arg) { degreeType = arg; }

	void print();
	void getDegreeProgram();
};
