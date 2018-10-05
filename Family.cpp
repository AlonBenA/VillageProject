#include "pch.h"
#include "Family.h"


Family::Family()
{
}


Family::~Family()
{
}

Family::Family(int numOfFamilyMembers, Person* myFamilyMembers, int numOfAnimals, Animal* myAnimals, House myHouse) {}

Person* GetFamilyMembers() {
	Person p;
	return &p;
}
Animal* GetAnimals() {
	Animal a;
	return &a;
}
void operator+(Animal a) {}
void operator-(Animal a) {}
House GetHouse() {
	House h;
	return h;
}