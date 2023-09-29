#include <iostream>
#include <string>

using namespace std;


bool twoMovies(int flightLength, int movieLengths[], int size)
{

	for (int i = 0; i < size; i++)
	{
		for (int j = size; j > 0; j--)
		{
			if (movieLengths[i] + movieLengths[j] == flightLength && i !=j)
			{
				cout << "True";
				return true;
			}
		}
	}
	return false;
}
