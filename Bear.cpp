#include "pch.h"
#include "Bear.h"

#include <iostream>

using namespace std;

Bear::Bear()
{
}


Bear::~Bear()
{
}

Bear::Bear(int numOfLegs, bool isDangerous, bool isMeatEater): OutDoorAnimal(numOfLegs, isDangerous, isMeatEater) {}

string Bear::MakeNoise() {
	return "bear sounds";
}


bool Bear::operator==(const Bear & other) {
	if (OutDoorAnimal::operator==(other)) {
		return true;
	}
	return false;
}

void Bear::print() {
	OutDoorAnimal::print();
	cout << " is bear " << Bear::MakeNoise() << endl;
}