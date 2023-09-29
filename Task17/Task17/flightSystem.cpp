#include <iostream>
#include <string>
#include "Function.h";

using namespace std;

int main()
{
	int size = 6;
	int* movieLengths = new int[size];

	movieLengths[0] = 10;
	movieLengths[1] = 20;
	movieLengths[2] = 30;
	movieLengths[3] = 40;
	movieLengths[4] = 50;
	movieLengths[5] = 60;

	int flightLength;

	cout << "Enter the duration of the flight: ";
	cin >> flightLength;

	bool success = twoMovies(flightLength, movieLengths, size);

	if (success)
	{
		return true;
	}

	else
	{
		return false;
	}

}