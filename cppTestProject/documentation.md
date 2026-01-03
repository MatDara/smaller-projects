# Documentation for my C++ learning

C++ is a programming language that seems quite difficult at first, but can be easily understood and worked with.

It is very versatile and is used in practically everything (computer programs, machines, etc.) due to it being incredibly fast and easy to work with, once understood.

In the following documentation, I'll try to keep things simple by referencing other programming languages like C# and Java.

## Basics

A C++ file always contains the main class:

```
int main() { 
    // program goes here
    return 0;
}
```
The main function that is called when the program gets started.

`#include <iostream>` is the library that is responsible for the input and output in the console.  
Note that including stuff must always happen at the top of the file before any classes for the included stuff to actually work.  
If something is called that hasn't been declared above the call, then C++ will throw an error, even if it is declared bellow the call.  
Declarations can also occur in a **header file** but the header file has to be included with `#include "headerFileName.h"`.  
Header files will be fully explained in it's own chapter later on.

C++ is a type based language, like C# and Java, containing types like int, char, bool, etc; that can be initialized, assigned a variable and read.  
An important thing to note is that string isn't in by default but can be included from the std namespace and by including it at the top with a `#include <string>`.

If `using namespace std;` is used, then the `string` keyword and other keywords included in the std namespace can be used without having to write `std::` before the keywords each time they are used.  
This practice isn't recommended tough and can cause problems if multiple namespaces use the same keyword names.  

There is also the `auto` keyword can be used to automatically get the correct type for the variable that is getting assigned.

To output stuff into the console, the keyword `cout` has to be used followed by `<<` and then the actual output.  
Multiple things can be outputted by adding more `<<`.  
Don't forget the `;` at the end!  
Example: `cout << "Hello " << userName;`  
Note that trying to call an undeclared variable will throw an error.

To get an input, the `cin` keyword has to be used followed by `>>` and then the variable name.  
Example: `cin >> inputX;`  
The input variable can also be a boolean or a number, but if the input doesn't contain the variable type then the variable will become a 0.  
Note that the cin will only read until the enter key or space key get pushed.  
To be able to use spaces in the console input, the function `getline(cin, inputX);` where `inputX` is a declared variable can be use.  

### Operations:

Arithmetic Operations are the same as in C# and Java


Assignment Operators:
most are the same as in C# and Java

the following are also valid in C++:

Bitwise AND:  &=
```
int a = 6;   // 110
int b = 3;   // 011
a &= b;      // 010 (2 in decimal)
```

Bitwise OR:   |=  
```
int a = 6;   // 110
int b = 3;   // 011
a |= b;      // 111 (7 in decimal)
```

Bitwise XOR:  ^=
```
int a = 6;   // 110
int b = 3;   // 011
a ^= b;      // 101 (5 in decimal)
```

Right shift:  >>=
```
int a = 8;   // 1000
a >>= 2;     // 0010 (2 in decimal)
```

Left shift:   <<=
```
int a = 5;   // 0101
a <<= 1;     // 1010 (10 in decimal)
```

Same as in C basically.

*Comparison Operators*, *Logical Operators* and the *Order of Operations* is the same as in C# and Java

### Strings:

Omitting Namespace std:  

If you do not want to use `using namespace std;`, you can prefix standard library names with `std::`.  
Example:
```
std::cout << "Hello World!" << std::endl;
std::string myString = "Hello";
^-- this would not be required if 'namespace std;' is used 
```      
This is often preferred in larger projects to avoid name conflicts.


Strings can be concatenated using the + operator, same as in C# and Java or by using the append() method.  
Trying to use the + operator between a string and a non-string type will cause a compilation error in C++.

string.length() and string.size() both return the length of the string.

Chars can also be easily accessed using the index in a String, same as in C# and Java.  
Alternatively, the at() method can be used.
Example under /W3SchoolTutorial/basics/myFirstProgram.cpp at lines 109 to 111.

Strings can als be done C-style using character arrays.

### Math functions:

To use math functions, the `<cmath>` library needs to be included.  

It includes common functions like sqrt(), pow(), round(), ceil(), floor(), etc.


### boolalpha:

To change the appearance of booleans in the output (true/false instead of 1/0), 
the `std::boolalpha` manipulator from the `<iomanip>` library can be used.  
Note: `boolalpha` is not a data type. It is an I/O manipulator. 

Using boolalpha is useful, for avoiding confusion when displaying boolean values in the console.

The `noboolalpha` manipulator can be used to turn it back to 0 and 1.

Example under /W3SchoolTutorial/basics/myFirstProgram.cpp at lines 166 to 170.