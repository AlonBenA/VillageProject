#pragma once
#include "Person.h"

class Child :public Person
{
private:
	Person* firstParent;
	Person* secondParent;
	int grade;

public:
	Child();
	Child(string name, string gender, bool isSingle, Person* p1, Person* p2);
	~Child();

	Person* getFirstParent();
	Person* getSecondParent();
	int getGrade();

	const Child& operator++();
	const Child& operator--();
};

