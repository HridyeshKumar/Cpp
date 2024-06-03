// CPP program to illustrate how to find lcm of two numbers using std::lcm function
#include <iostream>
#include <numeric>
using namespace std;
int main()
{
  int a, b;
  cin>> a>> b;
	cout << "LCM(a,b) = " << lcm(a,b) << endl;
	return 0;
}
