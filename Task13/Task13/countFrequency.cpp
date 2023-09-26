#include <iostream>
#include <string>
#include "Function.h";

using namespace std;


int main()
{

	int size = 6;

	int* arr = new int[size];
	cout << "Enter array values..\n";

	for (int i = 0; i < size; i++)
	{
		cout << "Element " << i << ": ";
		cin >> arr[i];
	}

	cout << "Enter a value to search  its frequency: ";
	int value;
	cin >> value;

   frequencyCount(size, arr, value);
}