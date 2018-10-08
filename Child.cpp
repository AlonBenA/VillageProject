#include "pch.h"
#include "Child.h"

Child::Child()
{
}

Child::Child(string name, string gender, bool isSingle, Person* p1, Person* p2):Person(name, gender, isspace)
{
	this->firstParent = p1;
	this->secondParent = p2;
}

Child::~Child()
{
}

Person* Child::getFirstParent() 
{
	return this->firstParent;
}

Person* Child::getSecondParent() 
{
	return this->secondParent;
}

int Child::getGrade()
{
	return this->grade;
}

const Child& Child::operator++()
{
	this->grade++;
	return *this;
}

const Child& Child::operator--()
{
	this->grade--;
	return *this;
}

bool Child::operator==(const Child &other)
{
	if (Person::operator==(other) == false)
		return false;
	if ((*(other.firstParent) == *(this->firstParent)) == false)
		return false;
	if ((*(other.secondParent) == *(this->secondParent)) == false)
		return false;
	if (other.grade != this->grade)
		return false;
	return true;
}