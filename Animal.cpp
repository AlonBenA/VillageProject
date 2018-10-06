#include "pch.h"
#include "Animal.h"

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