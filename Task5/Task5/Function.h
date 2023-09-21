#include <iostream>
#include <string>
using namespace std;

int charInt(char x)
{


	if (x >= '0' && x <= '9')
	{
		int z  = x - '0';
		return z;
		
	}
	
	else
	{
		return 0;
	}
	
}