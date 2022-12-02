//Auto is used for type detection

#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;
class Base{};
int main(){
    auto x = 20;
    vector<int> v{1,3,4,5};
    auto i = v.begin();
    cout<<endl;
    cout<<typeid(x).name()<<endl;
    cout<<typeid(i).name()<<endl;
}
