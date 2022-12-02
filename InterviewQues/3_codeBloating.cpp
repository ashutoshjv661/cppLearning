//Unnessary use of resourcing and making code slow,inefficient

#include<iostream>
using namespace std;
int main(){
    //Bloated code
    string s("Debugging here");
    cout<<s<<endl;
    //Instead of creating a string object

    cout<<"Debugging here";
}