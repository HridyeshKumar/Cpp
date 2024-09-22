// C++ program to find factorial of given number
#include <iostream>
using namespace std;
// Function to find factorial of given number
unsigned int factorial(unsigned int n){
  if (n == 0)
    return 1;
  return n * factorial(n - 1);
}
int main(){
  int num ;
  cin>> n; 
  cout << "Factorial of " << num << " is " << factorial(num) << endl;
  return 0;
}
