#include <iostream>
#include <string>

using namespace std;

bool isWordCharacter(char c) {
    
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int wordCounter(int size, char characters[]) {
    int wordCount = 0;

    for (int i = 0; i < size; i++) {
        char currentChar = characters[i];

        if (isWordCharacter(currentChar)) {


            wordCount++;

        }

    }

    return wordCount;
}
