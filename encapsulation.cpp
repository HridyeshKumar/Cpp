#include<iostream>
using namespace std;
class ABC{
  int x;
  public:
  void set(int n){
    x=n;
  }
  int get(){
    return x;
  }
};

int main(){
  ABC obj1;
  obj1.set(3);
  cout<<obj1.get()<<endl;
  return 0;
}
