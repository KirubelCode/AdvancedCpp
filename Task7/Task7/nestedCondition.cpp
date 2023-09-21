#include <iostream>
#include <string>
#include "Function.h";

using namespace std;


int main() {
    int n = 4; // number of rows

    //i = current row number
    for (int i = 1; i <= n * 2 - 1; ++i) {
        //amount of A characters per row
        for (int j = 1; j <= 7; ++j) {
            std::cout << 'A';
        }
        std::cout << std::endl;
    }

    return 0;
}