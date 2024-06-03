// C++ program to find GCD of two numbers 
#include <iostream> 
using namespace std; 
// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
	// Find Minimum of a and b 
	int result = min(a, b); 
	while (result > 0) { 
		if (a % result == 0 && b % result == 0) { 
			break; 
		} 
		result--; 
	} 
	return result; 
} 
int main() 
{ 
	int a , b ; 
  cin>> a >> b;
	cout << "GCD of " << a << " and " << b << " is "<< gcd(a, b); 
	return 0; 
} 
