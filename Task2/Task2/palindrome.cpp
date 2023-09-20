#include <iostream>
#include <string>
#include "Function.h";
using namespace std;


int main()
{
	string x;
	cout << "Enter a word: ";
		cin >> x;

	cout <<	palindrome(x);

}