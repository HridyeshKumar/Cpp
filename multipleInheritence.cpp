#include<iostream>
using namespace std;
class Parent1{
public:
  Parent(){
    cout<<"Parent1 class"<<endl;
  }
};

class Parent2{
public:
  Parent2(){
    cout<<"Parent2 class"<<endl;
  }
};

class Child:public Parent1,public Parent2{
public:
  Child(){
    cout<<"Child class"<<endl;
  }
};

int main(){
  Child c;
  return 0;
}
