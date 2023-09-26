#include <iostream>
#include <string>
#include "Function.h";

using namespace std;

int main()
{

	int size = 5;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		
		cout << "Enter Elements into the array:\n";
		cout << "Element " << i << ": ";
		cin >> arr[i];
	}


	cout << "Enter the delete index: ";
	int deleteIndex;
	cin >> deleteIndex;

	int count = 0;

	bool elementDelete = deleteElement(size, count, arr, deleteIndex);
	if (elementDelete)
	{
		for (int i = 0; i < size; i++)
		{
			cout << "Updated Array! \n";
			cout << arr[i] << "\n";
		}
		return true;
	}

	else
	{
		return false;
	}

}