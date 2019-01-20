#pragma once

#include <vector>;
#include "Constituency.h"
#include "Seat.h"

using namespace std;

class House
{
public:
	bool proposeBill();
	void holdElection();
private:
	int _numberOfSeats;
	vector<Seat*> _listOfSeats;
};