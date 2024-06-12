#include <iostream>
using namespace std;
class variable{
    int num;
    public:
    void setvalue(int value){
    num=value;
    }
    void showvalue();
};
void variable::showvalue(){
    cout<<"number:"<<num<<endl;
    
}

int main() {
    variable object[2],*p;
    object[0].setvalue(30);
    object[1].setvalue(40);
    p=&object[0];
    p->showvalue();
    p++;
    p->showvalue();
    p--;
    p->showvalue();
    
    return 0;
   
}
