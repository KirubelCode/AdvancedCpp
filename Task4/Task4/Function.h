#include <iostream>
#include <string>
using namespace std;


int binaryToDecimal(int x)
{

	int num = x;
	int decimalVal = 0;
	//initial base
	int base = 1;

	while (num)
	{
		//to get the last number 
		int lastNum = num % 10;
		//to decrease number
		num = num / 10;

		//finds decimal value
		decimalVal += lastNum * base;

		//update the base
		base = base * 2;

	}
	return decimalVal;
}