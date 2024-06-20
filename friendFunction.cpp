#include<iostream>
using namespace std;
class A{
  int x;
  A(int y){
    x=y;
  }
  friend void print(A &obj);
};
void print(A &obj){
  cout<<obj.x<<endl;
}

int main(){
  A obj(5);
  print(obj);
  return 0;
}
