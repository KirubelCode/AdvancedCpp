#include <iostream>
#include <string>

using namespace std;

int find(int size, int arr[], int toFind) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == toFind) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found
}