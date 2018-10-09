#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <typeinfo>
#include <string.h>
#include "pch.h"
#include "Village.h"
#include "Villa.h"
#include "Child.h"
#include "Dog.h"
#include "Parent.h"

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

void Village::AddFamily(Family& f)
{
	this->families.push_back(f);
}

void Village::DisqualifyFamily(Family& f)
{
	vector<Family>::iterator found = find(this->families.begin(), this->families.end(), f);
	if (found == this->families.end())
		cout << "Family doesn't exist\n";
	else
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
		numOfAnimals += (*itr).GetAnimals().size();
	}

	return numOfAnimals;
}

bool Village::validateAllHousesAreIndividual()// Individual house == Vila 
{ 
	vector<Family>::iterator itr = this->families.begin();
	vector<Family>::iterator itrEnd = this->families.end();
	for (; itr != itrEnd; ++itr)
	{
		if ((typeid(*(itr->GetHouse())) == typeid(Villa))==false)
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
		vector<Person*> &p1 = famItr->GetFamilyMembers();
		vector<Person*>::iterator personItr = p1.begin();
		vector<Person*>::iterator personItrEnd = p1.end();

		for (;personItr != personItrEnd; ++personItr)
		{
			Child* c1 = new Child;
			c1 = dynamic_cast<Child*>(*personItr);
			if (c1 != NULL)
			{
				if (c1->getGrade() == 1)
					(*famItr).operator+(Dog());
			}
		}
	}
}