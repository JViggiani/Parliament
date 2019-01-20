#pragma once

#include <vector>;
#include <string>;
#include "Person.h";

using namespace std;

class Seat
{
public:
	Person_Representative* getRepresentative()
	{
		return _person;
	};
private:
	Person_Representative* _person;
	bool _isOccupied;
};

class Seat_Geographic: public Seat
{
public:
	Constituency* getConstituency()
	{
		return _constituency;
	};

private:
	Constituency* _constituency;
};