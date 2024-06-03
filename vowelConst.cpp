// C++ program to check if a given character is vowel or consonant.
#include <iostream>
using namespace std;
// Function to check whether a character is vowel or not
void vowelOrConsonant(char x)
{
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
		cout << "Vowel" << endl;
	else
		cout << "Consonant" << endl;
}
int main()
{
	vowelOrConsonant('c');
	vowelOrConsonant('E');
	return 0;
}
