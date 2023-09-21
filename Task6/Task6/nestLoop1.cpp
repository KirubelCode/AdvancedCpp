#include <iostream>
#include <string>
#include "Function.h";

using namespace std;


int main() {
    int n = 4; // number of rows

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << 'A';
        }
        //previous buffer displayed on newline with any "current" buffer
        std::cout << std::endl;
    }

    return 0;
}