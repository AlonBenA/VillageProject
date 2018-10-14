#include "pch.h"
#include "OutDoorAnimal.h"
#include <iostream>

using namespace std;

OutDoorAnimal::OutDoorAnimal() {}

OutDoorAnimal::OutDoorAnimal(int numOfLegs, bool isDangerous, bool isMeatEater): Animal(numOfLegs), isDangerous(isDangerous), isMeatEater(isMeatEater)
{

}


OutDoorAnimal::~OutDoorAnimal()
{
}


bool OutDoorAnimal::getIsDangerous() {
	return isDangerous;
}

bool OutDoorAnimal::getIsMeatEater() {
	return isMeatEater;
}


bool OutDoorAnimal::operator==(const OutDoorAnimal& other) {

	if ( Animal::operator==(other) && (isDangerous == other.isDangerous) &&
		(isMeatEater == other.isMeatEater) ) {
		return true;
	}
	return false;
}


void OutDoorAnimal::print() {
	Animal::print();
	cout << "an OutDoor Animal" << " is Dangerous: " << isDangerous << " and is Meat Eater: " << isMeatEater << endl;
}