#pragma once
#include <string>
using namespace std;
class Person
{
protected:
	string name, gender;
	bool isSingle;

public:
	Person();
	~Person();
	
	bool hasSpouse();
	string getName();
	string getGender();
	string introduce();
};