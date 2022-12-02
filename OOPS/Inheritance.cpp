/*
Inheritance is one of the key features of Object-oriented programming in C++. 
It allows us to create a new class (derived class) from an existing class (base class). 
The derived class inherits the features from the base class and can have additional features of its own. 
Inheritance allows us to define a class in terms of another class, which makes it easier to create and maintain an application. 
This also provides an opportunity to reuse the code functionality and fast implementation time. 
When creating a class, instead of writing completely new data members and member functions, 
the programmer can designate that the new class should inherit the members of an existing class. 
This existing class is called the base class, and the new class is referred to as the derived class.
*/
#include<iostream>
#include<string>
class parent_class { 
    //Body of parent class 
}; 
class child_class: public  parent_class { //access_modifier
    //Body of child class 
};


/*
Modes of Inheritance 
1. Public mode: If we derive a subclass from a public base class. 
Then, the base class’s public members will become public in the derived class, 
and protected class members will become protected in the derived class. 
2. Protected mode: If we derive a subclass from a Protected base class. 
Then both public members and protected members of the base class will 
become protected in the derived class. 
 3. Private mode: If we derive a subclass from a Private base class. 
 Then both public members and protected members of the base class will become Private 
 in the derived class. 
 Example: Suppose we have three classes with 
 names: car, bicycle, and truck. 
 */

class vehicle{ 
    public: 
    std::string color; 
    int max_speed; 
}; 
class car : public vehicle{ 
    int num_gears; 
}; 
class bicycle : public vehicle{
    bool is_foldable;
}; 
class truck : public vehicle{ 
    int max_weight; 
};

/*
 Types of inheritance
 1. Single level
 2. Multilevel
 3. Multiple : single derived multiple base
 4. Hierarchical : tree like 
 5. Hybrid Inheritance
*/