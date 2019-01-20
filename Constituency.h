#pragma once

#include <vector>;
#include <string>

using namespace std;

class Constituency
{
public:
	string getName();
	int getNumberOfVoters()
	{
		return _numberOfVoters;
	}
private:
	string _name;
	int _numberOfVoters;
};