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
	Person(string name, string gender, bool isSingle);
	virtual ~Person();
	
	string getName();
	void setName(string name);
	string getGender();
	void setGender(string gender);
	bool hasSpouse();
	void setSpouse(bool isSingle);

	string introduce();
};