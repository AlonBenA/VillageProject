#pragma once
#include <vector>
#include "Person.h"
#include "Child.h"

using namespace std;

class Parent : public Person
{
private:
	int numOfChildren;
	vector<Child> myChildren;
	Parent* spouse;

public:
	Parent();
	Parent(string name, string gender, bool isSingle, int numOfChildren);
	~Parent();
	
	void addChild(Child child);
	vector<Child> showChildren();
	const Parent& operator+(Parent spouse);
	Parent* getSupouse();
	bool operator==(const Parent &other);
};

