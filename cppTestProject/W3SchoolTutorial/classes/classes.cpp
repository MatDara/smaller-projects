#include <iostream>
#include <string>

using namespace std;

// DON'T FORGET:
// Always declare stuff you want to use at the top
class MyClass {
    public:
        void myMethod() {
            cout << "Hello World!" << endl;
        }
        int myNum;
        string myString;
}; // <-- don't forget the semicolon

// Methods inside classes can also be defined outside the class
// I do have some ideas on how these might be used but for now I think I'll stick with inside definitions 
class OtherClass {
    public:
        void otherMethod(); // declaration
};

void OtherClass::otherMethod(){ // definition
    cout << "Hello other World!" << endl;
}

int main(){
    /*
    I'm going to spare the whole theory of OOP 
    because it is exactly the same as in C# and Java
    */ 


    MyClass myObj;

    myObj.myNum = 21;
    myObj.myString = "Sharks are great and sometimes white!";

    cout << myObj.myString << endl;
    cout << myObj.myNum << endl;
    myObj.myMethod();

    OtherClass otherObj;
    otherObj.otherMethod();

    // continue from chapter C++ Constructors

    return 0;
}
