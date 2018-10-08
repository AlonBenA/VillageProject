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
	vector<Person> myFamilyMembers;
	myFamilyMembers.push_back(mother);
	myFamilyMembers.push_back(father);
	myFamilyMembers.push_back(child1);
	myFamilyMembers.push_back(child2);

	Dog dog(4, true, true, "Rex");
	Bear bear(4, true, false);
	vector<Animal> myAnimals;
	myAnimals.push_back(dog);
	myAnimals.push_back(bear);

	Apartment apartment(10, 101, 69);
	Family family(4, myFamilyMembers, 0, myAnimals, apartment);
}


