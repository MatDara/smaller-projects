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

class WithConstructor {
    private:
        int myNum;
    public:
        WithConstructor(){
            myNum = 42;
            displayMessage();
        } // constructor definition inside the class
        WithConstructor(int num); // overloaded constructor declaration
        void displayMessage() {
            cout << "This is a message from the constructor class!" << endl;
        }
};

WithConstructor::WithConstructor(int num){ // constructor definition outside the class
    myNum = num;
    displayMessage();
}   

class GetSetClass {
    private:
        int myNum;
    public:
        GetSetClass() : myNum(0) {}
        GetSetClass(int num) // uses member initializer list
        : myNum(num) {}

        void setMyNum(int num) {
            myNum = num;
        }
        int getMyNum() {
            return myNum;
        }
};

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

    /* Constructors
        Constructors in C++ don't differ much from other languages
        They have the same name as the class and no return type
        They should be public unless you have a specific reason to make them private or protected
        They can also be overloaded and defined outside the class like other methods
        Why would anyone want to declare them outside the class?
        No clue!
    */

    WithConstructor constructorObj1; // calls the default constructor
    WithConstructor constructorObj2(100); // calls the overloaded constructor

    /*
        The keyword public, private, and protected are access specifiers.
        Unlike other languages in C++ these are not written before each member
        but rather as labels that affect all members declared after them.
        By default all members of a class are private if no access specifier is defined.

        Only make variables and methods public if you have to!
    */

    // getters and setters work the same way as in other languages

    GetSetClass getSetClass;
    getSetClass.setMyNum(21);

    /*
        Should constructor use setters or directly assign the value?
        Neither!
        They should be initialized with the member initializer list
    */

    // continue from chapter C++ Friend Functions
    // also maybe possibly make the darn Markdown File


    return 0;
}
