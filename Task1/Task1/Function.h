#include <iostream>
#include <string>
using namespace std;

int leapYear(int x)
{
	if (x % 4 == 0)
	{
		if (x % 100 == 0)
		{
			if (x % 400 == 0)
			{
				string isLeap = "This is a leap Year";
				
				cout << isLeap;
			}

			else
			{
				string noLeap = "This is not a leap Year";

				cout << noLeap;
			}
		}
	}

	return 0;

}
