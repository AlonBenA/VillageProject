#include "pch.h"
#include "Parent.h"

Parent::Parent()
{

}

Parent::Parent(string name, string gender, bool isSingle, int numOfChildren):Person(name, gender, isSingle)
{
	this->numOfChildren = numOfChildren;
	this->spouse = NULL;
}

Parent::~Parent()
{
}

void Parent::addChild(Child child)
{
	this->myChildren.push_back(child);
}

vector<Child> Parent::showChildren()
{
	return this->myChildren;
}

const Parent& Parent::operator+(Parent spouse)
{
	this->spouse = &spouse;
	return *this;
}

Parent* Parent::getSupouse()
{
	return this->spouse;
}

bool Parent::operator==(const Parent &other)
{
	if (Person::operator==(other) == false)
		return false;
	if (this->numOfChildren != other.numOfChildren)
		return false;
	if ((*(this->spouse) == *(other.spouse)) == false)
		return false;
	bool is_equal = false;
	is_equal = std::equal(this->myChildren.begin(), this->myChildren.end(), other.myChildren.begin());
	if (is_equal==false)
		return false;
	return true;
}