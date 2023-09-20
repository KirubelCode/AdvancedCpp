#include <iostream>
#include <string>

using namespace std;

string isPrime(int x)
{

	if (x / x == 1 && x / 1 == x && x % 2 !=0)
	{
		return "This is a prime number!";
	}

	else
	{
		return "This is not a prime number!";
	}
	
}
