#include <iostream>
#include <string>
using namespace std;


string palindrome(string x)
{

	string p = x;
	reverse(p.begin(), p.end());
	
	if (x == p)
	{
		return "This is a palindrome!";
	}
	else
	{
		return "This is not a palindrome";
	}
}