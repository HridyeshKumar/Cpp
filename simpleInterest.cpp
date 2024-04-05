#include<iostream>
using namespace std;
int main(){
    int p,r,t,si;
    cout<<"Principal:";
    cin>>p;
    cout<<"Rate:";
    cin>>r;
    cout<<"Time:";
    cin>>t;
    si = p*r*t/100;
    cout<<"Simple Interest:"<<si;
    return 0;
}
