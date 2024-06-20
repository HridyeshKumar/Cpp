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

class Child1:public Parent1{
public:
  Child1(){
    cout<<"Child1 class"<<endl;
  }
};

class Child2:public Parent1{
public:
  Child2(){
    cout<<"Child2 class"<<endl;
  }
};

int main(){
  Child c;
  return 0;
}
