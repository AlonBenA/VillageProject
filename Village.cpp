#include <iostream>
#include <algorithm>
#include "pch.h"
#include "Village.h"
#include "Villa.h"
#include "Child.h"
#include "Dog.h"

Village::Village()
{
}

Village::Village(vector<Family> families)
{
	this->families = families;
}

Village::~Village()
{
}

void Village::AddFamily(Family f)
{
	this->families.push_back(f);
}

void Village::DisqualifyFamily(Family f)
{
	vector<Family>::iterator found = find(this->families.begin(), this->families.end(), f);
	if (found == this->families.end()) //Maybe we needs to overload the operator== at Family
		cout << "Animal doesn't exist\n";
	this->families.erase(found);
}

int Village::GetNumOfResidents() 
{ 
	int numOfResidents = 0;

	vector<Family>::iterator itr = this->families.begin();
	vector<Family>::iterator itrEnd = this->families.end();
	for (; itr != itrEnd; ++itr)
	{
		numOfResidents += ((*itr).GetFamilyMembers().size());
	}

	return numOfResidents;
}

int Village::GetNumOfAnimals() 
{ 
	int numOfAnimals = 0;
	vector<Family>::iterator itr = this->families.begin();
	vector<Family>::iterator itrEnd = this->families.end();
	for (; itr != itrEnd; ++itr)
	{
		numOfAnimals += ((*itr).GetFamilyMembers.size());
	}

	return numOfAnimals;
}

bool Village::validateAllHousesAreIndividual()// Individual house == Vila 
{ 
	vector<Family>::iterator itr = this->families.begin();
	vector<Family>::iterator itrEnd = this->families.end();
	for (; itr != itrEnd; ++itr)
	{
		if (typeid((*itr).GetHouse()).name() != "Villa")
			return false;
	}

	return true;
}

void Village::giftAllFirstGradeChildrenADog() 
{
	vector<Family>::iterator famItr = this->families.begin();
	vector<Family>::iterator famItrEnd = this->families.end();
	for (; famItr != famItrEnd; ++famItr)
	{
		vector<Person>::iterator personItr = (*famItr).GetFamilyMembers().begin();
		vector<Person>::iterator personItrEnd = (*famItr).GetFamilyMembers().end();
		for (; personItr != personItrEnd; ++personItr)
		{
			if (typeid(*personItr).name() == "Child")
			{
				Child &c1 = dynamic_cast<Child&> (*personItr); //Hope it will work
				if (c1.getGrade() == 1)
					(*famItr).operator+(Dog());
			}
		}
	}
}