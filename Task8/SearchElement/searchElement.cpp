#include <iostream>
#include <string>
#include "Function.h";

using namespace std;

#include <iostream>


int main() {
    int size;

    
    cout << "Enter the size of the array: ";
    cin >> size;

    
    if (size <= 0) {
        cout << "Invalid size. Please enter a valid size." << endl;
        return 1;
    }

    //creates a dynamic array with a pointer
    int* arr = new int[size]; 

    // ask user to enter elements
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i]; // populate array
    }

    int toFind;

    // ask the user for the element to search for
    cout << "Enter the element to search for: ";
    cin >> toFind;

    int result = find(size, arr, toFind);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    }
    else {
        cout << "Element not found." << endl;
        return -1;
    }

    return 0;
}
