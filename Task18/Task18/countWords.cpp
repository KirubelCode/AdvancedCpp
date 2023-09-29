#include <iostream>
#include <string>
#include "Function.h";

using namespace std;

int main()
{
    int size = 11;
    char characters[] = "Hello World";

    int count = wordCounter(size, characters);
    cout << "Number of words: " << count;


}