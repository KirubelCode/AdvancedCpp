#include <iostream>
#include <string>
#include "Function.h";

using namespace std;

int main()
{


	int size = 5;
	int enteredElements;

	cout << "Enter Elements into the array \n";
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Element " << i << ": ";
		cin >> arr[i];
	}

	


	int insertIndex;
	cout << "\n Enter an Index position: ";
	cin >> insertIndex;
	

	int insertedElement;
	cout << "Enter an element to insert: ";
	cin >> insertedElement;

	int count = 0;

	bool success = insertElement(size, count, arr, insertedElement, insertIndex);


	if (success)
	{
		cout << "Element Inserted! \n" << "Elements Shifted Right! \n";


		for (int i = 0; i < size; i++) {
			cout << arr[i] << "\n";
		}

		cout << "Updated count: " << count;

	}

	else
	{
		cout << "Failed Insertion..";
	}
}