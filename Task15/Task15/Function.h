#include <iostream>
#include <string>

using namespace std;


void reverse(int size, int arr[])
{
	
	for (int i = 0; i < size/2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i- 1] = temp;
		
	}
	
}
