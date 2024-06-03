// C++ program to check if a number is prime or not
#include <iostream>
using namespace std;
bool isPrime(int n)
{
	// Corner case
	if (n <= 1)
		return false;
	// Check from 2 to n-1
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
  int n;
  cin>>n;
	isPrime(n) ? cout << "True\n" : cout << "False\n";
	return 0;
}
