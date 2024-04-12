#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<"\t"<<b;
    return 0;
}