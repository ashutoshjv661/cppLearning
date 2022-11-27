//Implementing String class using OOPS
//Need to make some changes
#include<iostream>
#include<cstring>
class String{
    private: 
        char* res; //to store the string 
        unsigned int len;
    public:
        String():res(nullptr),len(0){} //initialiser list for default constructor
        String(const char* ch){
            len = strlen(ch);
            res = new char[len+1];//for \0
            strcpy(res,ch);
        }

        //Copy constructor
        String(const String& str){
            len = str.len;
            res = new char[len+1];
            strcpy(res,str.res);
        }
        //Implementing Move , && means rvalue reference, Passing something as a temporary object
        //No need to copy just point to the memory address.
        //Similary we can do s6 = std::move(s5); and overload move copy assignment operator
        String(String&& str){
            len = str.len;
            res = str.res;
            str.res = nullptr;
            str.len = 0;
        }
        void length(){
            std::cout<<this->len<<std::endl;
        }
        String& operator=(String str){
            swap(*this,str); //We need to implement this. 
            return *this; //CAS Idiom
        }
        void swap(String& str1,String& str2){
            std::swap(str1.res,str2.res);
            std::swap(str1.len,str2.len);
        }
        /*
        * There is another method to do it cleaner . CAS (Copy and swap Idiom)
        * We are passing by value and swapping with the [this] pointer
        * As we are passing my value it will call copy assignment operator
        *
        */
        // String& operator=(String &str){
        //     //self assigment check str1 = str1 ;
        //     if(this!= &str){
        //         char* temp = this->res;
        //         len = str.len;
        //         res = new char[len+1];
        //         strcpy(res,str.res);
        //         delete[] temp; //If the string has a value no memory leak
        //     }
        //     return *this;
        // }
        friend std::ostream& operator<<(std::ostream&,const String&);
        friend std::istream& operator>>(std::istream&,const String&); //So that we can access the privat members
        ~String(){
            if(res){
                delete[] res;
                res = nullptr;
                len = 0;
            }
        }
};
std::ostream& operator<<(std::ostream& stream,const String& str){
           stream<<"String val : => "<<str.res<<" \n";
           return stream;
}
std::istream& operator>>(std::istream& stream,const String& str){
    stream>>str.res;    
    return stream;
}

int main(){
    String s1;// default constructor
    String s2 = "Hello";//Parameterised constructor
    String s3 = s2; //Copy constructor
    String s4(s3);// Copy constructor
    s1 = s4; //Copy assignment operator
    s2.length();
    std::cout<<s2; //overloading << operator
    std::cin>>s1; //overload cin
    s1.length();
    std::cout<<s1;
    std::cout<<s2;
    std::cout<<s3;
    std::cout<<s4;
    String s5 = std::move(s4); //Moving s4 to s5 and not copying. s4 is left with nullptr(Implementation dependent)
}