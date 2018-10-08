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

bool Apartment::operator==(const Apartment& other) 
{
	if (House::operator==(other) == false)
		return false;
	if (this->apartmentNumber != other.apartmentNumber)
		return false;
	if (this->floor != other.floor)
		return false;
	return false;
}
