#include "Person.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

bool Person_Representative::voteInHouse()
{
	srand((int)time(0));
	int r = rand() % 1;
	return r ? true : false;
}