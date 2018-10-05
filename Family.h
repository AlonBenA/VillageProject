#pragma once
#include "Person.h"
#include "Animal.h"
#include "House.h"
//Alon 2
class Family
{
private:
	int numOfFamilyMembers;
	Person* myFamilyMembers;
	int numOfAnimals;
	Animal* myAnimals;
	House myHouse;
public:
	Family();
	~Family();
	Family(int numOfFamilyMembers, Person* myFamilyMembers, int numOfAnimals, Animal* myAnimals, House myHouse);
	Person* GetFamilyMembers();
	Animal* GetAnimals();
	void operator+(Animal a);
	void operator-(Animal a);
	House GetHouse();
};

