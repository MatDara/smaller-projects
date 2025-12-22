#include <iostream>
#include <functional>

using namespace std;

void myFunction();
void helloName(string name = "Hai");
int simpleAdd(int a, int b);
void setToBestAnimal(string &animal);
void changeSharkType(string sharkTypes[], int index, string newType);
int overloadedFunction(int a);
double overloadedFunction(double a , double b);
void lambdaExample(function<void()> func);

int main() {

    // Functions in C++
    // more or less the same as in C# and Java
    // I'm doing this in another file to keep it more organized

    /*
        Stuff to research:
            Do variables get deleted after function execution or do they need to be manually deleted?
            Also look at the stuff in myFirstProgram.cpp
    */
    
    // functions need to be declared at the top
    // if not the code will not compile
    // definition can be done later in the file
    myFunction();

    // Even though the definition can be done at the top, I think it's better to do it at the bottom

    // functions can also take parameters
    // just like in C# and Java
    helloName("Sharky");

    // functions can also have default parameters
    helloName(); // uses default parameter

    // functions can also return values
    int sum = simpleAdd(9, 10);



    // Pass by reference
    // just like in C, C++ can edit variables by reference using pointers
    string bestAnimal = "Dolphin"; // horrible choice btw
    cout << "Before setToBestAnimal: " << bestAnimal << endl;
    setToBestAnimal(bestAnimal);
    cout << "After setToBestAnimal: " << bestAnimal << endl;

    string sharkTypeArray[] = {"Great White", "Hammerhead", "Tiger", "Bull"};

    cout << "Before changeSharkType: " << sharkTypeArray[1] << endl;
    // changes "Hammerhead" to "Goblin" without needing the & operator because arrays are passed by reference by default
    changeSharkType(sharkTypeArray, 1, "Goblin"); 
    cout << "After changeSharkType: " << sharkTypeArray[1] << endl;

    // structures work the same as variables in this regard

    // Function Overloading
    // Pretty self explanatory
    // giving the same function name but different parameter types or counts 
    int overloadedInt = overloadedFunction(5); // calls int version
    double overloadedDouble = overloadedFunction(5.5, 4.5); // calls double version


    // global variables work the same as in other languages
    // only use it when necessary though


    // Recursion is still confusing but it exists
    // it is useful for memory efficiency

    // Lambda Expressions
    // useful for many things
    auto add = [](int x, int y) { return x + y; };
    int lambdaSum = add(3, 4);

    // they can be passed like variables to functions
    // WARNING: requires #include <functional>
    auto message = [](){ cout << "Hello from lambda!" << endl; };
    lambdaExample(message);

    // they can also be used in loops
    for (int i = 1; i <= 3; i++) {
        auto show = [i]() {
        cout << "Number: " << i << "\n";
        };
        show();
    }

    // the capture clause (brackets []) are used to capture variables from the surrounding scope
    // without it the lambda cannot access those variables
    // it can also be given a reference (&) to modify them

    string changeByLambda = "Unchanged";
    cout << "Before lambda change: " << changeByLambda << endl;
    auto changeString = [&changeByLambda](){ // does not work without the &
        changeByLambda = "Changed";
    };
    changeString(); // needs to be actually called
    cout << "After lambda change: " << changeByLambda << endl;

    // changeing the value of a variable that wasn't reference captured by the Lambda will not change the variable in the Lambda
    string favoriteSharkType = "Salmon";
    auto printFavoriteSharkType = [favoriteSharkType](){
        cout << "Favorite shark type: " << favoriteSharkType << endl;
    }; // <-- don't forget the semicolon here
    printFavoriteSharkType();
    favoriteSharkType = "Lemon";
    printFavoriteSharkType(); // still the same as the last one

    string newlyLearnedShark = "Nurse";
    auto printNewlyLearnedSharkType = [&newlyLearnedShark](){
        cout << "Newly learned shark type: " << newlyLearnedShark << endl;
    };
    printNewlyLearnedSharkType();
    newlyLearnedShark = "Greenland";
    printNewlyLearnedSharkType(); //now different because the lambda now looks at the variable directly

    // C++ Functions chapter is done :celebration:
    // You can't spell functions without fun (or ctions)
    // next up will be classes

    return 0;
}

void myFunction() {
    cout << "I just got executed!" << endl;
}

void helloName(string name) {
    cout << "Hello " << name << endl;
}

int simpleAdd(int a, int b) {
    return a + b;
}

void setToBestAnimal(string &animal) {
    animal = "Shark";
}
void changeSharkType(string sharkTypes[], int index, string newType) {
    sharkTypes[index] = newType;
}

int overloadedFunction(int a) {
    return a + a;
}
double overloadedFunction(double a , double b) {
    return a + b;
}
void lambdaExample(function<void()> func) {
    func();
    func();
}