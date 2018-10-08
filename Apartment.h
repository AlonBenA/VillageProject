#pragma once
#include "House.h"

class Apartment :
	public House
{
private:
	int floor;
	int apartmentNumber;

public:
	Apartment();
	~Apartment();
	Apartment(int numOfRooms, int floor, int apartmentNumber);
	int getFloorNumber();
	int getApartmentNumber();
	bool operator==(const Apartment& apartment1) const;
};

