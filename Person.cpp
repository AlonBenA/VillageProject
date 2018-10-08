#include "pch.h"
#include "Person.h"

Person::Person()
{
}

Person::Person(string name, string gender, bool isSingle)
{
	this->name = name;
	this->gender = gender;
	this->isSingle = isSingle;
}

Person::~Person()
{
}

string Person::getName()
{
	return this->name;
}

void Person::setName(string name)
{
	this->name = name;
}

string Person::getGender()
{
	return this->gender;
}

void Person::setGender(string gender)
{
	this->gender = gender;
}

bool Person::hasSpouse()
{
	return this->isSingle;
}

void Person::setSpouse(bool isSingle)
{
	this->isSingle = isSingle;
}

string Person::introduce()
{
	string personInfo;
	personInfo = "Person name: " + this->name + " gender: " + this->gender + " is single? ";
	if (this->isSingle)
		personInfo += "true \n";
	else
		personInfo += "false \n";
	return personInfo;
}

bool Person::operator==(const Person &other)
{
	if (other.name.compare(this->name) == 0)
		if (other.isSingle == this->isSingle)
			if (other.gender.compare(this->gender) == 0)
				return true;
	return false;
}