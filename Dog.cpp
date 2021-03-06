#include "pch.h"
#include "Dog.h"

#include <iostream>

using namespace std;

Dog::Dog()
{
}


Dog::~Dog()
{
}

Dog::Dog(int numOfLegs, bool isEnergetic, bool isLoyal, string name): InDoorAnimal(numOfLegs, isEnergetic, isLoyal, name)
{
}

string Dog::MakeNoise() {
	return "Woof!!";
}



bool Dog::operator==(const Dog & other) {
	if (InDoorAnimal::operator==(other)) {
		return true;
	}
	return false;
}


void Dog::print() {
	InDoorAnimal::print();
	cout << " is Dog " << Dog::MakeNoise() << endl;

}