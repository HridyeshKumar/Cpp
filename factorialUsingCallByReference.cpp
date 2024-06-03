// C++ program to find the factorial of a given number using call by reference method
#include<iostream>
using namespace std;
// Function to find factorial 
void factorial(int n, int *f)
{
	int i;
	for(i = n; i >= 1; i--)
		*f = (*f) * i;
}
int main()
{
	int num , fact = 1;
  cin>> num;
	factorial(num, &fact);
	cout << "Factorial of " << num << " is "<< fact;
	return 0;
}
