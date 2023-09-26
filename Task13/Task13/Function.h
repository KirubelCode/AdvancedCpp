#include <iostream>
#include <string>

using namespace std;


int frequencyCount(int size, int arr[], int value)
{
	int count = 0;
	for (int i = 0; i <= size; i++)
	{
		if (arr[i] == value)
		{
			count++;
			
			
		}
		
	}
	cout << "\n Count: " << count;
	return count;
	
	
}
