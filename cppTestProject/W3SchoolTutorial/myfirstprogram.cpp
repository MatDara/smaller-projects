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


  // Continue from C++ Strings chapter next.

  return 0;
} 