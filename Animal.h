#pragma once
#include <string>

using namespace std;
class Animal
{
protected:
	int numOfLegs;
public:
	Animal();
	~Animal();
	int ShowNumLegs();
	//virtual string MakeNoise();
};

