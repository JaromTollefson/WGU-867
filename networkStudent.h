#pragma once
#include "student.h"

//Declare NetworkStudent class
class NetworkStudent : public Student
{
	Degree degreeType;
public:
	NetworkStudent() {};
	NetworkStudent(string[]);
	Degree getDegree() { return NETWORKING; }
	void putDegree(Degree arg) { degreeType = arg; }

	//virtuals
	void print();
	void getDegreeProgram();
};
