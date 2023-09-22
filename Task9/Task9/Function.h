#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int find2ndLargest(int size, int arr[])
{
	// sort in descending order
	sort(arr, arr + size, greater<int>());

	return arr[1];


}