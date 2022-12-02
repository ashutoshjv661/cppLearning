//Friend function or class can access private member of a class.
#include<iostream>
using namespace std;
class Base{
    int x;
    public:
    Base(){}
    Base(int x):x(x){}
    friend void setFun(Base&);

};
void setFun(Base &obj){
    //accessing private member x
    obj.x = 10;
    cout<<obj.x<<endl;
}
int main(){
    Base b(30);
    setFun(b);
    return 0;
}