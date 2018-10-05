#include "pch.h"
#include "Child.h"


Child::Child()
{
}


Child::~Child()
{
}

Child::Child(string name, string gender, bool isSingle, Person* p1, Person* p2) {}

Person* getFirstParent() {
	Person p;
	return &p;
}

Person* getSecondParent() {
	Person p;
	return &p;
}

void operator++ (Child) {

}


void operator-- (Child) {
}