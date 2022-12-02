/*
    Polymorphism is considered one of the important features of Object-Oriented Programming. 
    Polymorphism is a concept that allows you to perform a single action in different ways.
     Polymorphism is the combination of two Greek words. 
     The poly means many, and morphs means forms. So polymorphism means many forms. 
     Let’s understand polymorphism with a real-life example. Real-life example:  
     A person at the same time can have different characteristics. 
     Like a man at the same time is a father, a husband, and an employee. 
     So the same person possesses different behavior in different situations. 
     This is called polymorphism.
*/

/**
 * 1. Compile Time : Operator overloading,Function overloading
 * 2. Runtime : Virtual functions and method overriding
 * 
*/

#include<iostream> 
using namespace std; 
class Parent{
     public: void show() { 
        cout<<"Inside parent class"<<endl; } 
}; 
class subclass1:public Parent { 
    public:void show() {
         cout<<"Inside subclass1"<<endl; 
         } 
}; 
class subclass2: public Parent {
     public:void show() { 
        cout<<"Inside subclass2"; 
    } 
}; 
int main() { 
    subclass1 o1; 
    subclass2 o2; 
    o1.show(); 
    o2.show(); 
}