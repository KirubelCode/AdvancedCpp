#include <iostream>
#include <string>

using namespace std;


bool deleteElement(int& size, int& count, int arr[], int deleteIndex)
{
	for (int i = deleteIndex; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	size--;

	for (int i = 0; i < size; i++)
	{
		if (arr[i])
		{
			count++;
		}
	}

	return true;
}
