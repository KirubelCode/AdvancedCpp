#include <iostream>
#include <string>
#include "Function.h";

using namespace std;

int main()
{
	int size = 4;
	cout << "Enter array elements..\n";

	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Element " << i << ": ";
		cin >> arr[i];
	}

	rotateLeft(size, arr);

	for (int j = 0; j < size; j++)
	{
		cout << arr[j];
	}
}