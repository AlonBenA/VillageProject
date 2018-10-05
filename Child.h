#pragma once
#include "Person.h"
class Child :
	public Person
{
private:
	Person* firstParent;
	Person* secondParent;
	int grade;
public:
	Child();
	~Child();
	Child(string name, string gender, bool isSingle, Person* p1, Person* p2);
	Person* getFirstParent();
	Person* getSecondParent();
	void operator++();
	void operator--();
};

