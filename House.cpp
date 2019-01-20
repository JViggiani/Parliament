#include "House.h"
#include "cstdlib"
#include "thread"

bool House::proposeBill()
{
	int ayes = 0;
	int nays = 0;
	vector<Seat*>::iterator seatIterator;
	for (seatIterator = _listOfSeats.begin(); seatIterator != _listOfSeats.end(); ++seatIterator)
	{
		Person_Representative* MP = (*seatIterator)->getRepresentative();
		bool vote = MP->voteInHouse();
		if (vote == true)
		{
			++ayes;
		}
		else
		{
			++nays;
		}
	}
	return ayes > nays ? true : false;
}

void House::holdElection()
{

}