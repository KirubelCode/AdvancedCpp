#include <iostream>
#include <string>
#include "Function.h";

using namespace std;

int main()
{
	int x;
	cout << "Enter a Number: ";

	cin >> x;

	cout << isPrime(x);
}