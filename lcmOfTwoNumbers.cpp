// C++ program to find the LCM of two numbers using the if statement and while loop
#include <iostream>
using namespace std;
int main()
{
	int a , b , max_num, flag = 1;
  cin>> a >>b ;
	// Use ternary operator to get the large number
	max_num = (a > b) ? a : b;
	while (flag) {
		// if statement checks max_num is completely divisible by n1 and n2.
		if (max_num % a == 0 && max_num % b == 0) {
			cout << "LCM of " << a << " and " << b << " is "<< max_num;
			break;
		}
		++max_num;
	}
	return 0;
}
