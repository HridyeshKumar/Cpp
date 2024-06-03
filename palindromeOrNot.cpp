// A recursive C++ program to check whether a given number is palindrome or not
#include <iostream>
using namespace std;
// Function to check palindrome
int checkPalindrome(string str)
{ 
	// Calculating string length
	int len = str.length();
	// Traversing through the string upto half its length
	for (int i = 0; i < len / 2; i++) 
	{	 
		// Comparing i th character from starting and len-i th characte from end
		if (str[i] != str[len - i - 1])
			return false;
	}
	// If the above loop doesn't return then it is palindrome
	return true;
}
int main()
{ 
	// Taking number as string
	string st;
  cin>> st;
	if (checkPalindrome(st) == true)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
