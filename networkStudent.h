#pragma once
#include "student.h"
class NetworkStudent : public Student
{
	Degree degreeType;
public:
	NetworkStudent() {};
	NetworkStudent(string[]);
	Degree getDegree() { return NETWORKING; }
	void putDegree(Degree arg) { degreeType = arg; }
	void print();
	void getDegreeProgram();
};
