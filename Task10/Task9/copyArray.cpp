#include <iostream>
#include <string>
#include "Function.h";

using namespace std;


int main()
{
	int size;

	cout << "Enter an array size: ";
	cin >> size;
	
	//dynamic pointer array
	int* arr1 = new int[size];
	int* arr2 = new int[size];

	cout << "Enter elements into the array: " << :: endl;

	for (int i = 0; i <= size; i++)
	{
		
		cout << "Element " << i + 1 << ": ";
		cin >> arr1[i];
	}

	

	for (int i = 0; i <= size; i++)
	{
		cout << "Original Array: ";
		copyArraytoArray(size, arr1, arr2);
		cout << arr1[i] << ::endl;  
	
	}

	for (int j = 0; j <= size; j++)
	{
		cout << "Copied Array: ";
		
		cout << arr2[j] << ::endl;
	}
	
	
}