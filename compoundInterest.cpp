// C++ program to find compound interest for given values.
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	double principal = 10000, rate = 5, time = 2;
	// Calculate compound interest
	double A = principal * ((pow((1 + rate / 100), time)));
	double CI = A - principal;
	cout << "Compound interest is " << CI;
	return 0;
}
