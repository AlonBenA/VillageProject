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
	if (found == this->myAnimals.end())
		cout << "Animal doesn't exist\n";
	this->myAnimals.erase(found);
}

House Family::GetHouse()
{
	return this->myHouse;
}

bool Family::operator==(const Family& other)
{
	if (other.numOfAnimals != this->numOfAnimals)
		return false;
	bool isEqualMembers = false;
	isEqualMembers = std::equal(this->myFamilyMembers.begin(), this->myFamilyMembers.end(), other.myFamilyMembers.begin());
	if (isEqualMembers == false)
		return false;
	if (other.numOfAnimals != this->numOfAnimals)
		return false;
	bool isEqualAnimals = false;
	isEqualAnimals = std::equal(this->myAnimals.begin(), this->myAnimals.end(), other.myAnimals.begin());
	if (isEqualAnimals == false)
		return false;
	if (this->myHouse == other.myHouse)
		return false;
	return true;
}