#pragma once
#include "Person.h"
#include "Child.h"

class Parent : public Person
{
private:
	int numOfChildren;
	Child* myChildren;
public:
	Parent();
	~Parent();
	Parent(string name, string gender, bool isSingle, int numOfChildren);
	Person* getChildren();
	void operator+(Parent spouse);
	void addChild(Person child);
};

