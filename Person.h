#pragma once

#pragma once

#include <vector>;
#include "Constituency.h"

using namespace std;

class Person
{
public:
	bool standForElection();
	int vote();
	Constituency* getConstituency()
	{
		return _constituency;
	};
private:
	Person* votingIntent;
	Constituency* _constituency;
};

class Person_Representative : public Person
{
public:
	bool voteInHouse();

private:
	Constituency* _constituency;
};