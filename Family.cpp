#include <iostream>
#include <algorithm>
#include "pch.h"
#include "Family.h"

Family::Family()
{
}

Family::Family(int numOfFamilyMembers, vector<Person> myFamilyMembers,
				int numOfAnimals, vector<Animal> myAnimals, House myHouse)
{
	this->numOfFamilyMembers = numOfFamilyMembers;
	this->myFamilyMembers = myFamilyMembers;
	this->numOfAnimals = numOfAnimals;
	this->myHouse = myHouse;
}

Family::~Family()
{
}

vector<Person> Family::GetFamilyMembers()
{
	return this->myFamilyMembers;
}

vector<Animal> Family::GetAnimals()
{
	return this->myAnimals;
}

const Family& Family::operator+(Animal a)
{
	this->myAnimals.push_back(a);
}

const Family& Family::operator-(Animal a)
{
	vector<Animal>::iterator found = find(this->myAnimals.begin(), this->myAnimals.end(), a);
	if (found == this->myAnimals.end()) //Maybe it would be necessary to overload the operator== at Animal
		cout << "Animal doesn't exist\n";
	this->myAnimals.erase(found);
}

House Family::GetHouse()
{
	return this->myHouse;
}