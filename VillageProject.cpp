// VillageProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "stdafx.h"
#include "pch.h"
#include <iostream>
#include <string>
#include "Village.h"
#include "Family.h"
#include "Parent.h"
#include "Dog.h"
#include "Bear.h"
#include "Apartment.h"
#include "Villa.h"

using namespace std;

void AlonTest()
{
	//1
	Parent mother("Mila", "female", false, 2);
	Parent father("Shalom", "male", false, 2);
	mother = mother + father;
	father = father + mother;
	//add print

	//2
	Child child1("Keren", "female", false, &mother, &father);
	Child child2("Shreder", "male", true, &mother, &father);
	//add print

	//3
	Dog dog(4, true, true, "Rex");
	dog.print();
	cout << endl;

	//4
	Bear bear(4, true, false);
	bear.print();

	//5
	Apartment apartment(10, 101, 69);
	//add print


	//6
	vector<Animal*> myAnimals;
	vector<Person*> myFamilyMembers;
	myFamilyMembers.push_back(&mother);
	myFamilyMembers.push_back(&father);
	myFamilyMembers.push_back(&child1);
	myFamilyMembers.push_back(&child2);

	Family family(4, myFamilyMembers, 0, myAnimals, &apartment);

	//add print


	//7
	family = family + dog;
	//add print

	//8
	//can't add bear
	family = family + bear;
	//add print

	//9
	family = family - dog;
	//add print

	//To stop the screen from closeing
	getchar();

}



int main()
{
	Parent mother("Mila", "female", false, 2);
	Parent father("Shalom", "male", false, 2);
	mother = mother + father;
	father = father + mother;

	Child child1("Keren", "female", false, &mother, &father);
	Child child2("Shreder", "male", true, &mother, &father);
	vector<Person*> myFamilyMembers;
	myFamilyMembers.push_back(&mother);
	myFamilyMembers.push_back(&father);
	myFamilyMembers.push_back(&child1);
	myFamilyMembers.push_back(&child2);

	vector<Animal*> myAnimals;
	Apartment apartment(10, 101, 69);
	Family family(4, myFamilyMembers, 0, myAnimals, &apartment);

	//Add the next code for testing only.
	//Villa villa(4, false, 5);
	//Family family(4, myFamilyMembers, 0, myAnimals, &villa);

	//Create and Add animals
	Dog dog(4, true, true, "Rex");
	Bear bear(4, true, false);
	family = family + dog;
	family = family + bear;

	//Out the Dog
	family = family - dog;

	//Add the next code for testing only.
	//Village v1;
	//v1.AddFamily(family);
	//cout<< "Number of residents: "<< v1.GetNumOfResidents() << endl;
	//cout<< "Number of animals: " << v1.GetNumOfAnimals() << endl;
	//cout<< "Is all the houses is vila? (1 for yes 0 for no): " << v1.validateAllHousesAreIndividual() <<endl;
	//v1.giftAllFirstGradeChildrenADog();


	AlonTest();
}


