#include <iostream> 
using namespace std;
bool isEven(int n) { 
    return (n % 2 == 0); 
} 
int main(){ 
    int n;
    cout<<"Enter any integer:";
    cin>>n; 
    if(isEven(n))
        cout << "Even"; 
    else
        cout << "Odd";
    return 0; 
}