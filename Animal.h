#pragma once
#include <string>

using namespace std;
class Animal
{
protected:
	int numOfLegs;


public:
	Animal(int numOfLegs);
	Animal();


	virtual ~Animal();
	int ShowNumLegs();
	virtual string MakeNoise();
	bool operator==(const Animal& other);
};

