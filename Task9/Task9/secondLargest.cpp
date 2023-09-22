#include <iostream>
#include <string>
#include "Function.h";

using namespace std;

int main()
{
	int size;

	cout << "Enter array size: ";
	cin >> size;

	int* arr1 = new int[size];

	cout << "Enter positive integers into the array: " << ::endl;

	for (int i = 0; i <= size; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> arr1[i];
	}

	cout << "Second Largest: ";

	cout << find2ndLargest(size, arr1);

}