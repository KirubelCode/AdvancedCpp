#include <iostream>
#include <string>

using namespace std;

int rotateLeft(int size, int arr[])
{

	int last = arr[0];
	for (int i = 0;  i < size; i++)
	{
		
		arr[i] = arr[i + 1];
		arr[size] = last;



	}
	return 1;
}
