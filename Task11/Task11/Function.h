#include <iostream>
#include <string>

using namespace std;

//& is a variable refrencing another
bool insertElement(int& size, int& count, int arr[], int elementToInsert, int insertIndex)
{
	
	

	// value in last position
	int temp = arr[size - 1];
	arr[insertIndex] = elementToInsert;

	// shify elements to the right
	for (int i = size - 1; i > 0; i--) {
		arr[i] = arr[i - 1];
	}

	// temp value in 1st position
	arr[0] = temp;


	if (arr[insertIndex+1]  ==elementToInsert)
	{
		return true;
	}
	
	else
	{
		
		return false;
	}
	return true;
}

