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
		cout << "\n Element " << i << ": ";
		cin >> arr[i];
	}

	countDuplicates(size, arr);

}