#include<iostrem>
using namespace std;
class Complex{
public:
  int real;
  int img;
  Complex operator+(Complex &c){
    Complex ans(0,0);
    ans.real=real+c.real;
    ans.img=img+c.img;
    return img;
  }
};

int main(){
  Complex c1(1,2);
  Complex c2(1,3);
  Complex c3=c1+c2;
  cout<<c3.real<<" i"<<c3.img<<endl;
  return 0;
}
