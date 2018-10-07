// VillageProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
#include "Village.h"
#include "Family.h"
#include "Parent.h"
#include "Dog.h"
#include "Bear.h"
#include "Apartment.h"

int main()
{
	Parent mother("Mila", "female", false, 2);
	Parent father("Shalom", "male", false, 2);

	Child child1("Keren", "female", false, &mother, &father);
	Child child2("Shreder", "male", true, &mother, &father);

	Dog dog(4, true, true, "Rex");
	Bear bear(4, true, false);

	Apartment apartment(10,101,69);
	
	Person* familyMembers = NULL;
	Animal* myAnimals = NULL;
	Family family(4, familyMembers, 0, myAnimals, apartment);

}


