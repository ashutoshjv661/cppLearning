//const cast is used to convert to const
//T can be only used for pointer,references and pointer-to-member type
// Val can be only pointer or a reference
//const_cast<T>(val);

// 1: When the actual refered object is not constant 
#include <iostream>
using namespace std;
int main(){
    const int a1 = 10;
    const int* b1 = &a1;
    int *d1 = const_cast<int*>(b1);//removing const of b1 but still what it points to is const
    *d1 = 16; //Invalid and undefined behaviour
    cout<<a1<<endl;//10 as compiler will copy value directly 
    cout<<*d1<<endl;//16
    int a2 = 20;
    const int *b2 = &a2;
    int *d2 = const_cast<int*>(b2);
    *d2 = 30; //Valid
    cout<<a2<<endl;//30
    cout<<*d2<<endl;//30
}

//2. When a third party library takes non const value

/*
void thirdpartyLiv(int* x);
const int x= 20;
const int *px = &x;
thirdpartyLib(const_cast<int*>(px));
*/

/*
Never use until 
1. Use only when actual refered value is not const
2. Use for thirdparty library
*/