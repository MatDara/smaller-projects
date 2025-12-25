#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

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

class FriendFunction {
    private:
        string thisIsPrivate = "this is a private variable and can't be accessed outside the class";
    public:
        friend void displayPrivateVar(FriendFunction friendFunc);
};

// even tough this function isn't apart of the Friend Function class, it can still use it's private variable
void displayPrivateVar(FriendFunction friendFunc){
    cout << friendFunc.thisIsPrivate << endl;
}

class Vehicle{
    public:
        void drive(){
            cout << "driving the Vehicle" << endl; 
        }
};

class Car : public Vehicle{
    public:
        void honk(){
            cout << "HONK!" << endl;
        }
};

class House{
    protected:
        string houseLayout;

    public:
        void liveHere(){
            cout << "You can live here!" << endl;
        }
};

class Van : public Car, public House{
    public:
        void setHouseLayout(string layout){
            houseLayout = layout;
        }
};


// Copied from W3schools because I like the example:
// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
}; 

class VirtualAnimal{
    public:
        virtual void animalSound(){
            cout << "The animal makes a sound \n";
        }
};

class VirtualPig : public VirtualAnimal {
  public:
    void animalSound() override { // Don't forget the keyword override!
      cout << "The pig says: wee wee \n";
    }
};

template <typename T>
T add(T a, T b) {
        return a + b;
}

template <typename T1, typename T2>
class Pair{
    public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b)
    : first(a), second(b) {}

    void display() {
        cout << "First: " << first << " \tSecond: " << second << endl;
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


    // Friend Function:
    FriendFunction fr;
    displayPrivateVar(fr);

    /* 
        The friend function is a very confusing concept to me
        I guess the best use for it is when you want to have a class with variables that shouldn't be accessed outside,
        but should still be worked with using an external function.
        The more I think about it the more usefull it seems.
    */


    // Inheritance:
    // It works basically the same way as in C# but the keyword "public" needs to be written after the ":" symbol

    Car car;
    car.drive();

    // Don't forget to keep track on what functions the child class can do.

    // There is also multilevel inheritance (classes that inherit functions from classes that also inherited those functions)
    // Quite self explanitory
    
    // A class can also inherit from multiple classes

    // The "protected" keyword functions the same way as in other languages

    Van van;
    van.drive();
    van.liveHere();
    van.setHouseLayout("Bathroom, Bedroom");


    // Polymorphism:
    // Basically just overriding a function from a base class
    
    Animal animal;
    Pig pig;
    Dog dog;

    animal.animalSound();
    pig.animalSound();
    dog.animalSound();


    // Virtual:
    // When trying to call a function (animalSound) from a child class (Pig)
    // via a pointer on an object that is the Base type (Animal*),
    // the function of the base class gets called and not the one from the child as one would expect.

    
    Animal* a;  // Declare a pointer to the base class (Animal)
    Pig p;  // Create an object of the derived class (Pig)
    a = &p;  // Point the base class pointer to the Pig object
    cout << "\nWe should get the pig's animalSound, but actually get: ";
    a->animalSound(); // Call the animalSound() function using the pointer. Since animalSound() is not virtual, this calls the Animal's version

    // This problem can be solved with the keyword "virtual"

    VirtualAnimal* va;  
    VirtualPig vp;  
    va = &vp;  
    va->animalSound(); 
    (*va).animalSound();
    // the arrow (->) is the short form version of calling a function trough a pointer
    // alternatively it could also be done as ((*va).animalSound();)

    /*
        It's kind of a hassle to use virtual.
        I wish this would be done automatically by C++ to avoid having to change too much in retrospect if something doesn't work correctly,
        but you get what you get I guess.
    */


    // Templates:
    // Templates are usefull for the case that something needs to be done in multiple types
    // It's similar to C# 
    
    cout << add<int>(5, 3) << "\n";
    cout << add<double>(2.5, 1.5) << "\n";

    // I'm not going to lie, the syntax is a bit confusing but I'm sure I'll get used to it

    // templates can also be used with classes and there can be multiple value types:

    Pair<string, int> person("John", 30);
    Pair<int, double> score(51, 9.5);

    person.display();
    score.display(); 

    // Templates are probably the predecessors of generics



    // Files:
    // Using the fstream library we can manipulate files. (WARNING: iostream also NEEDS to be included)
    // NOTE: the fstream library is a combination of the ofstream and the ifstream library
    //  ofstream library: creates and writes to files
    //  ifstream library: reads from files

    // create and open a file
    ofstream MyFile("filename.txt");

    // write to the file
    MyFile << "Writing to a file!";

    MyFile.close();

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
        // Output the text from the file
        cout << myText;
    }

    // Close the file
    MyReadFile.close(); 


    // fstream seems to be a pretty usefull library!
    
    
    // Date and Time:
    // The ctime library allows us to work with the Date and Time

    // Get the timestamp for the current date and time
    time_t timestampA;
    time(&timestampA);

    // Display the date and time represented by the timestamp
    cout << endl << ctime(&timestampA);

    /*
        There are two different data types used to store the date and time:
            time_t for timestamps and struct tm for datetime structures.
        time_t is better when used with cout and when you want to save it.
        datetime structures are way more easier to edit via the code.

        look at the structures in case you forgot how it works.
    */

    struct tm datetime;
    time_t timestamp;

    datetime.tm_year = 2023 - 1900; // Number of years since 1900
    datetime.tm_mon = 12 - 1; // Number of months since January
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;
    // Daylight Savings must be specified
    // -1 uses the computer's timezone setting
    datetime.tm_isdst = -1; // negative when unknown, 0 if false, positive if true

    timestamp = mktime(&datetime);
    // NOTE: mktime does NOT need tm_mday, tm_wday and tm_yday to work but needs the rest
    
    cout << ctime(&timestamp);


    // mktime also fills in the missing values

    mktime(&datetime);

    string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "The date is on a " << weekdays[datetime.tm_wday];

    /*
        The localtime() and gmtime() functions can convert timestamps into datetime structures.
        The localtime() function returns a pointer to a structure representing the time in the computer's time zone.
        The gmtime() function returns a pointer to a structure representing the time in the GMT time zone.
        These functions return a pointer to a datetime structure.
    */

    cout << "\nlocaltime: ";
    time_t timestampLT = time(&timestampLT);
    struct tm datetimeLT = *localtime(&timestampLT);

    cout << datetimeLT.tm_hour << endl;


    // asctime is basically identical to ctime but does not correct incorrect dates
    cout << "asctime: " << asctime(&datetimeLT) << endl;

    // in case you want to edit the way the time gets displayed
    // you need to use the strftime() with a char Array
    // the formating is the following: https://www.w3schools.com/cpp/ref_ctime_strftime.asp

    char output[50];

    strftime(output, 50, "%B %e, %Y", &datetimeLT);
    cout << output << endl;

    // difftime() can be used to measure the difference in seconds between two time stamps
    // NOTE: does not work with structs
    // newer date first for positive result
    cout << difftime(mktime(&datetimeLT), mktime(&datetime)) << endl;

    // in days
    cout << difftime(mktime(&datetimeLT), mktime(&datetime))/(60 * 60 * 24) << endl;


    // the clock() is more useful measuring time intervals in the program
    
    clock_t before = clock();
    int k = 0;
    for(int i = 0; i < 1000000; i++) {
        k += i;
    }
    clock_t duration = clock() - before;
    cout << "Duration: " << (float)duration / CLOCKS_PER_SEC << " seconds" << endl;

    // don't forget to cast it to a float or double and to divide it with the CLOCKS_PER_SEC


    // and this wasn't even the whole ctime library :sob:
    // whatever
    // Chapter Classes is done :yay:

    return 0;
}