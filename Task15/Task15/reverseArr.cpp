#include <iostream>
#include <string>
#include "Function.h";

using namespace std;


int main()
{
	int size = 4;

	int* arr = new int[size];
	cout << "Enter array elements: ";

	for (int i = 0; i < size; i++)
	{
		cout << "Element " << i << ": ";
		cin >> arr[i];
	}

	reverse(size, arr);

	for (int j = 0; j < size; j++)
	{
		cout << arr[j];
	}
}