#include "pch.h"
#include "Apartment.h"


Apartment::Apartment():House()
{
}

Apartment::Apartment(int numOfRooms, int floor, int apartmentNumber):House(numOfRooms)
{
	this->floor = floor;
	this->apartmentNumber = apartmentNumber;
}

Apartment::~Apartment()
{
}

int Apartment::getFloorNumber() {
	return this->floor;
}

int Apartment::getApartmentNumber() {
	return this->apartmentNumber;
}