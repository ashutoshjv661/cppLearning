/*
Encapsulation : refers to bundling data and the methods that operate on that data into a single unit.
Many programming languages use encapsulation frequently in the form of classes. 
A class is an example of encapsulation in computer science in that it consists of data and methods
that have been bundled into a single unit.
Encapsulation may also refer to a mechanism of restricting the direct access to 
some components of an object, such that users cannot access state values for all of the 
variables of a particular object. Encapsulation can be used to hide both data members and 
data functions or methods associated with an instantiated class or object. 
In other words: Encapsulation is about wrapping data and methods into a single class 
and protecting it from outside intervention.
*/

/*
Abstraction : Abstraction means providing only some of the information to the user by hiding its 
internal implementation details. We just need to know about the methods of the objects that we need to call
 and the input parameters needed to trigger a specific operation, excluding the details of implementation 
 and type of action performed to get the result. 
 Abstraction is selecting data from a larger pool to show only relevant details of the object to the user.
  It helps in reducing programming complexity and efforts. It is one of the most important concepts of OOPs. 
  Real-life example: When you send an email to someone, you just click send, and you get the success message; 
  what happens when you click send, how data is transmitted over the network to the recipient is hidden 
  from you (because it is irrelevant to you). We can implement Abstraction in C++ using classes. 
  The class helps us to group data members and member functions using available access specifiers.
   A Class can decide which data members will be visible to the outside world and not. 
   Access specifiers are the main pillar of implementing abstraction in C++. 
   We can use access specifiers to enforce restrictions on class members.

   Advantages Of Abstraction 
   ● Only you can make changes to your data or function, and no one else can. 
   ● It makes the application secure by not allowing anyone else to see the background details. 
   ● Increases the reusability of the code. ● Avoids duplication of your code.
*/

#include <iostream> 
using namespace std; 
class Student{ // private data members 
    private: 
    string studentName; 
    int studentRollno;
    int studentAge; 
    // get method for student name to access 
    // private variable studentName 
    public: 
        string getStudentName() { return studentName; } 
        // set method for student name to set 
        // the value in private variable studentName 
        void setStudentName(string studentName) {
             this-> studentName = studentName; 
        } 
        // get method for student rollno to access 
        // private variable studentRollno 
        int getStudentRollno() {
             return studentRollno; 
        } 
        // set method for student rollno to set 
        // the value in private variable studentRollno 
        void setStudentRollno(int studentRollno) {
             this-> studentRollno = studentRollno; 
        } 
        // get method for student age to access 
        // private variable studentAge 
        int getStudentAge() {
             return studentAge; 
        } 
        // set method for student age to set 
        // the value in private variable studentAge 
        void setStudentAge(int studentAge) { 
            this-> studentAge = studentAge; 
        } 
}; 
int main() { 
    Student obj; 
    // setting the values of the variables
    obj.setStudentName("Avinash"); 
    obj.setStudentRollno(101); 
    obj.setStudentAge(22); 
    // printing the values of the variables 
    cout << "Student Name : " << obj.getStudentName() << endl; 
    cout << "Student Rollno : " << obj.getStudentRollno() << endl; 
    cout << "Student Age : " << obj.getStudentAge(); 
} 
/*
Output: 
Student Name : Avinash 
Student Rollno : 101 
Student Age : 22
*/