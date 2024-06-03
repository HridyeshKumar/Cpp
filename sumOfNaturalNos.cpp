// C++ program to find sum of first n natural numbers. 
#include <iostream> 
using namespace std; 
int findSum(int n) 
{ 
	int sum = 0; 
	for (int i = 1; i <= n; i++) 
		sum = sum + i; 
	return sum; 
} 
int main() 
{ 
	int n ;
  cin>> n ;
	cout << findSum(n); 
	return 0; 
}
