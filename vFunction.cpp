#include<iostream>
#include<string>
//Pure Virtual functions ensure that the derived classes have guarenteed functionality i.e. implementatin of the interface.
//Printable interface
class Printable {
    public:
        virtual std::string GetClassName() = 0;
};

class Entity : public Printable {
    public:
    virtual std::string GetName(){return "Entity";} //virtual function which can be overriden
    std::string GetClassName() override {return "Entity";} //implementing the interface
};


class Player: public Entity {  //as Player is Entityt and Entity is Printable then Player is Printable
    private :
        std::string m_Name;
    public:
        Player(const std::string& name){m_Name = name;}
        std::string GetName() override {return m_Name;}
        void PrintHello(){std::cout<<"Hello from "<<m_Name<<"\n";}
       // std::string GetClassName() override {return "Player";}
};


int main(){
    Entity* e = new Player("Ashu"); //Passing Player as Entity 
    std::cout<<e->GetClassName(); //Here Function overriden by player is printed
    Printable* pr = new Player("Ajay");
    std::cout<<pr->GetClassName();
    //Here Player is Entity which has overriden the GetClassName pure virtual function so Entity is 
    //printed if it is not implimented in Player even if we are passing Player as Printable.
}
