#include <iostream>
#include <string>

using namespace std;

int countDuplicates(int size, int arr[])
{
	 

	
	int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

             
            }

            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }

 
     cout << "Count: " << count;
	return count;
	return 0;
}
