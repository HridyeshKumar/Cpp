#include<iostream>
using namespace std;

class Parent{
public:
  Parent(){
    cout<<"Parent class"<<endl;
  }
};

class Child:public Parent{
public:
  Child(){
    cout<<"Child class"<<endl;
  }
};

class GrandChild:public Child{
public:
  GrandChild(){
    cout<<"GrandChild class"<<endl;
  }
};
int main(){
  GrandChild gc;
  return 0;
}
