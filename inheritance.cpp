#include<iotream>
using namespace std;

class Parent{
public:
  int x;
protected:
  int y;
private:
  int z;
};
class Child1:public Parent{
  //x will remain public
  //y will remain protected
  //z will not be accessible
};
class Child2:private Parent{
  //x will be private
  //y will be private
  //z will not be accessible
};
class Child3:protected Parent{
  //x will be protected
  //y will be protected
  //z will not be accessible
};
int main(){
  Parent p;
  p.x;
  p.y;
  p.z;
  return 0;
}
