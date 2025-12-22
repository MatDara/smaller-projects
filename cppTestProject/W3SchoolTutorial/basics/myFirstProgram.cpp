#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Hello World!" << endl; // this is a comment
  /*  This is a multi-line comment.
      Just like in C# and Java. 
  */
  cout << "this is a tab" << "\t" << "<-- here" << endl;
  cout << "This is a backslash: \\" << endl;
  cout << "This is a double quote: \"" << endl;

  int numX = 5, numY = 6, numZ = 50;
  cout << numX + numY + numZ << endl;

  numX = numY = numZ = 50;
  cout << numX + numY + numZ << endl;

  /* commented out to avoid waiting for user input during execution
  int inputX; 
  cout << "Type a number: "; // Type a number and press enter
  cin >> inputX; // Get user input from the keyboard
  cout << "Your number is: " << inputX << endl; // Display the input value 
  */

  // iostream explanation: https://www.w3schools.com/cpp/cpp_ref_iostream.asp

  
  cout << "\nFloat and double examples:" << endl;
  float f1 = 35e3;
  double d1 = 12E4;
  cout << f1 << endl;
  cout << d1 << endl;

  
  cout << "\nBoolean examples:" << endl;
  bool isCodingFun = true;
  bool isDarkChocolateTasty = false;
  cout << isCodingFun << endl;  // Outputs 1 (true)
  cout << isDarkChocolateTasty << endl;  // Outputs 0 (false) 

  cout << "\nCharacter examples:" << endl;
  char charA = 65, charB = 66, charC = 67;
  cout << charA << endl;
  cout << charB << endl;
  cout << charC << endl;

  cout << "\nString examples:" << endl;
  string greeting = "Hello"; // Note: remember to include the string library to use strings
  cout << greeting << endl;

  
  cout << "\nAuto example:" << endl;
  auto autoNumber = 42; // Automatically makes the type an int. behaves like var in C#
  cout << autoNumber << endl;
  auto autoFloatNum = 5.99f; // float
  auto autoDoubleNum = 9.98; // double
  auto autoString = string("Hello"); // std::string ; using string keyword is probably better
  cout << autoString << endl;

  //Operations:

  // Arithmetic Operations are the same as in C# and Java

  /*
    Assignment Operators:
    most are the same as in C# and Java

    the following are also valid in C++:

    Bitwise AND:  &=
      int a = 6;   // 110
      int b = 3;   // 011
      a &= b;      // 010 (2 in decimal)
    Bitwise OR:   |=
      int a = 6;   // 110
      int b = 3;   // 011
      a |= b;      // 111 (7 in decimal)
    Bitwise XOR:  ^=
      int a = 6;   // 110
      int b = 3;   // 011
      a ^= b;      // 101 (5 in decimal)
    Right shift:  >>=
      int a = 8;   // 1000
      a >>= 2;     // 0010 (2 in decimal)
    Left shift:   <<=
      int a = 5;   // 0101
      a <<= 1;     // 1010 (10 in decimal)

    Same as in C basically.
  */

  // Comparison Operators are the same as in C# and Java

  // Logical Operators are the same as in C# and Java

  // Order of Operations is the same as in C# and Java


  // Strings can be concatenated using the + operator, same as in C# and Java or by using the append() method.
  // trying to use the + operator between a string and a non-string type will cause a compilation error in C++.

  // string.length() and string.size() both return the length of the string
  
  // Chars can also be easily accessed using the index in a String, same as in C# and Java
  // alternatively, the at() method can be used
  // Example:
  string sampleString = "Hello, World!";
  sampleString.at(7) = 'w';
  char fifthChar = sampleString[4]; // 'o'

  // Reminder to use \ for special characters in strings

  // when using cin for strings the space character will terminate the input
  // to get around this, the getline() function can be used

  /* Commented out to avoid waiting for user input during execution
  cout << "\nUsing getline() to get a full line of text including spaces:" << endl;
  string fullLine;
  cout << "Type a sentence: ";
  getline(cin, fullLine);
  cout << "Your sentence is: " << fullLine << endl;
  */

  /* 
  Omitting Namespace std:
    If you do not want to use 'using namespace std;', you can prefix standard library names with 'std::'.
    Example:
      std::cout << "Hello World!" << std::endl;
      std::string myString = "Hello";
      ^-- this would not require 'using namespace std;'
    this is apparently often preferred in larger projects to avoid name conflicts.
    I have no clue what the :: means
    I'll look it up later.
    probably
    maybe
    don't count on it
  */

  // Strings can als be done C-style using character arrays (like in C (go figure))


  // NOTE TO SELF:
  // YOU COULD TRY PUTTING ALL THIS IN A MARKDOWN FILE WITH FORMATTING AND STUFF
  // also look up what the :: means in C++ pretty please


  // Math functions:

  // max() and min(): exactly what you think they do

  // <cmath> library: includes many common math functions like sqrt(), pow(), round(), ceil(), floor(), etc.
  // look up later if needed



  /* 
  if you want to change how the booleans are displayed (true/false instead of 1/0), 
  you can use the std::boolalpha manipulator from the <iomanip> library
  Note: boolalpha is not a data type. It is an I/O manipulator 

  Using boolalpha is probably useful to avoid confusion when displaying boolean values to users.
  */

  cout << "\nUsing boolalpha to display booleans as true/false:" << endl;
  cout << boolalpha; // set cout to display booleans as true/false
  cout << isCodingFun << endl;  // Outputs true
  cout << noboolalpha; // set cout back to default (1/0)
  cout << isDarkChocolateTasty << endl;  // Outputs 0

  // 1/3 of the course is done!

  // if, else, else if and switch statements are the same as in C# and Java
  // ternary operator is also the same as in C# and Java (condition ? value_if_true : value_if_false)

  // while, do while and for loops are the same as in C# and Java

  // for each loops in C++ use the syntax: for (data_type var : collection) { // code to be executed }
  string word = "Hai";
  cout << "\nUsing a for-each loop to iterate through characters in a string:" << endl;
  for (char c : word) {
    cout << c << endl;
  }
  
  // break and continue statements are the same as in C# and Java
  // don't forget to use them and remember that they only affect the innermost loop and not the if statements

  

  // Arrays are the same as always
  // no need to discuss them further
  // remember to use foreach loops to iterate through them when possible

  string arrayTest[] = {"apple", "banana", "cherry"};
  
  string alsoArrayTest[3] = {"Great White", "Hammerhead", "Tiger"};
  cout << "\nUsing a for-each loop to iterate through an array:" << endl;
  for (string s : alsoArrayTest) {
    cout << s + " Shark" << endl;
  }

  // vectors (dynamic arrays) are provided by the <vector> library
  // they need to be #included separately
  // they work similarly to Lists in C# and Java
  // these will come up later in the course

  // sizeof() function can be used to get the size of data types and variables in bytes
  // it is done pretty badly though because it returns the size in bytes, not the number of elements in an array
  // if you want the number of elements in an array, you have to divide the total size by the size of one element
  // example:
  cout << "\nUsing sizeof() to get the number of elements in an array:" << endl;
  int numArraySizeof[] = {10, 20, 30, 40, 50};
  cout << "Size of entire array in bytes: " << sizeof(numArraySizeof) << endl;
  int arraySizeSizeof = sizeof(numArraySizeof) / sizeof(numArraySizeof[0]);
  cout << "The array has " << arraySizeSizeof << " elements." << endl;

  // for each loops are way easier to use so use sizeof() only if you really need the size of an array


  // multi-dimensional arrays are also supported in C++
  // they are pretty cool so don't refrain from using them when needed

  int multiArray[2][3] = { 
    {1, 2, 3}, 
    {4, 5, 6} 
  };


  // HALFWAY THROUGH THE COURSE!!! 
  // I'm going to hug a shark to celebrate this or something



  // Structures (structs)
  // they seem to be similar to records in C#
  struct {
    string name;
    int age;
  } person, anotherPerson;

  person.name = "Hai";
  person.age = 16;

  anotherPerson.name = "Sharky";
  anotherPerson.age = 6;

  cout << "\nStruct example:" << endl;
  cout << "Name: " << person.name << ", Age: " << person.age << endl;
  cout << "Name: " << anotherPerson.name << ", Age: " << anotherPerson.age << endl;

  struct building
  {
    string street;
    int houseNumber;
  };

  building myBuilding;
  myBuilding.street = "Shark Ave";
  myBuilding.houseNumber = 123;




  // Enums
  // basically the same as in C# and Java

  cout << "\nEnum example:" << endl;
  enum Heating {
    FREEZING = 0,
    NORMAL = 20, 
    BURNING = 40, 
  };

  enum Heating myHeating = NORMAL;

  cout << "\nEnum example:" << endl;
  cout << "My heating is: " << myHeating << endl; 

  enum Level { // by default, the first value is 0, the second is 1, and so on
    LOW = 1, 
    MEDIUM, 
    HIGH };

  Level myLevel = MEDIUM;
  switch (myLevel)
  {
  case 1:
    cout << "easy" << endl;
    break;
  case 2:
    cout << "medium" << endl;
  case 3:
    cout << "hard" << endl;
    break;
  
  default:
    cout << "unknown level" << endl;
    break;
  }



  // References:
  // similar to pointers in C but works both ways (I'm actually not sure if pointers in C work both ways or not)
  cout << "\nReference example:" << endl;
  string bestAnimalKnownToMan = "Shark";
  string &whatIsTheBestAnimal = bestAnimalKnownToMan; // reference to bestAnimalKnownToMan
  cout << whatIsTheBestAnimal << endl;
  bestAnimalKnownToMan = "Lemon Shark";
  cout << whatIsTheBestAnimal << endl; // reflects the change made to bestAnimalKnownToMan
  whatIsTheBestAnimal = "Great White Shark";
  cout << bestAnimalKnownToMan << endl; // reflects the change made to whatIsTheBestAnimal

  // memory addresses can also be obtained using the & operator
  cout << "Memory address of bestAnimalKnownToMan: " << &bestAnimalKnownToMan << endl;
  cout << "Memory address of whatIsTheBestAnimal: " << &whatIsTheBestAnimal << endl; // should be the same as above


  // Pointers
  // Pointers are variables that store memory addresses
  cout << "\nPointer example:" << endl;
  string* pointerToBestAnimal = &bestAnimalKnownToMan; // pointer to bestAnimalKnownToMan
  // the & operator is used to get the address and is required here
  // the * operator is used to declare a pointer variable
  // the pointer type must match the type of the variable it points to
  cout << "Best animal via pointer: " << *pointerToBestAnimal << endl; // dereferencing the pointer to get the value
  cout << "Best animal address via pointer: " << pointerToBestAnimal << endl; // outputs the memory address
  *pointerToBestAnimal = "Salmon Shark"; // changing the value via the pointer

  // I can't really think of a good use for pointers that couldn't be done with references right now so I'll just use references for now
  // maybe for if I need to know the memory address specifically or something
  // Does C++ have a garbage collector? I should look that up later


  // Memory management in C++:
  // I guess all my questions got answered here
  // pointers are useful for dynamic memory allocation
  // C++ does not have a garbage collector like C# and Java
  // so memory allocated with new must be manually freed with delete to avoid memory leaks
  // if the memory is not freed, it will remain allocated until the program ends
  // allocating too much memory without freeing it can lead to memory exhaustion and crashes

  int* ptr = new int;
  *ptr = 35;
  cout << *ptr << endl;
  delete ptr; // free the allocated memory

  // in the cases of arrays, use delete[] to free the memory
  int* arrPtr = new int[5]{1, 2, 3, 4, 5};
  delete[] arrPtr; // free the allocated memory for the array

  /*
  When to use new:
    You don't know how much memory you'll need in advance (like how many guests or scores)
    You want to create memory while the program is running, based on user input
    You need to store large or flexible amounts of data
    You want full manual control over memory (e.g., performance-critical code)

  don't forget to use delete or delete[] to free memory when you're done with it!
  */

  // I am done with the tutorial for now :Yippee:
  // next up will be functions
  // I'll do that on another day though because it is 0:45 AM and I need to wake up at 6 AM :skull:

  return 0;
} 