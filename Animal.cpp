#include "pch.h"
#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal() {

}

Animal::Animal(int numOfLegs): numOfLegs(numOfLegs)
{
}

Animal::~Animal()
{
}

int Animal::ShowNumLegs() {
	return numOfLegs;
}

string Animal::MakeNoise() {
	return "";
}


bool Animal::operator==(const Animal& other) {
	if (numOfLegs == other.numOfLegs)
		return true;
	return false;
}


void Animal::print() {
	cout << "Anime with " << numOfLegs << " Legs " << endl;
}