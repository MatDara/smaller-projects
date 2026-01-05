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

### Operations

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

### Strings

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

### Math functions

To use math functions, the `<cmath>` library needs to be included.  

It includes common functions like sqrt(), pow(), round(), ceil(), floor(), etc.


### boolalpha

To change the appearance of booleans in the output (true/false instead of 1/0), 
the `std::boolalpha` manipulator from the `<iomanip>` library can be used.  
Note: `boolalpha` is not a data type. It is an I/O manipulator. 

Using boolalpha is useful, for avoiding confusion when displaying boolean values in the console.

The `noboolalpha` manipulator can be used to turn it back to 0 and 1.

Example under /W3SchoolTutorial/basics/myFirstProgram.cpp at lines 166 to 170.

### Conditional statements

Conditional statements (if, else if, switch, ...) work the same way as in C# and Java. 

The ternary operator works also the same way as in C# and Java (condition ? value_if_true : value_if_false)

### Loops

Loops also work the same way as in C# and Java.

The `break` and `continue` statements are the same as in C# and Java.

Don't forget to use them and remember that they only affect the innermost loop and not the if statements.


### Arrays

Arrays are the same as always.  
Remember to use foreach loops to iterate through them when possible.

Vectors (dynamic arrays) are provided by the `<vector>` library.  
They need to be included separately.  
They work similarly to Lists in C# and Java.  
Vectors will be explained more thoroughly later.  

The sizeof() function can be used to get the size of data types and variables in bytes.  
It returns the size in bytes of the whole array, not the number of elements in an array.  
To get the number of elements in an array, the total size of the array needs to be divided by the size of an element.  
Example under /W3SchoolTutorial/basics/myFirstProgram.cpp at lines 212 to 216.  

Multi-dimensional arrays work the same way as in C# and Java.  


### Structures

They are more or less the same as records in C#.  
Example under /W3SchoolTutorial/basics/myFirstProgram.cpp at lines 237 to 260. 


### Enums

Enums work more or less the same way as in C# and Java.  
Example under /W3SchoolTutorial/basics/myFirstProgram.cpp at lines 268 to 300.


### References

References are more or less linked copies to values.
A reference needs to have something to reference to.
Changes made to the reference reflect to the referenced variable and vise versa. 

Example under /W3SchoolTutorial/basics/myFirstProgram.cpp at lines 306 to 316.

### Pointers

Pointers are variables that store memory addresses.  
The value of the address where the pointer is pointing can be changed trough the pointer.  
The type of the pointer has to be the same as the type of the variable where the pointer points to.  
Unlike references, pointers can be declared without having a value.

Example: `type* pointerToVariable = &variableBeingPointedTo;` The type has to be the same as the variableBeingPointedTo type.  

More examples under /W3SchoolTutorial/basics/myFirstProgram.cpp at lines 322 to 329.


### Difference between pointers and references

A pointer is a variable that stores the memory address of another variable and can be reassigned, while a reference is an alias for an existing variable that must be initialized upon declaration and cannot be reassigned. Pointers can also be null and support pointer arithmetic, whereas references cannot be null and do not support arithmetic operations.

### Memory management in C++

Pointers are useful for dynamic memory allocation.  
C++ does not have a garbage collector like C# and Java so memory allocated with new must be manually freed with delete to avoid memory leaks.
If the memory is not freed, it will remain allocated until the program ends.  
Allocating too much memory without freeing it can lead to memory exhaustion and crashes.  
Note that memory allocated with `new` and `malloc` in functions do not get cleared after the function ends and stay there until the end of the program.  
Deallocating can be done with `delete` or `free`.  
In the cases of arrays, use `delete[]` to free the memory.  

 When to use new:
- You don't know how much memory you'll need in advance (like how many guests or scores).
- You want to create memory while the program is running, based on user input.
- You need to store large or flexible amounts of data.
- You want full manual control over memory (e.g., performance-critical code).

Don't forget to use delete or delete[] to free memory when you're done with it!

Examples under /W3SchoolTutorial/basics/myFirstProgram.cpp at lines 344 to 351.

## Functions

Functions work a lot differently from their counterparts in C# and Java.  

IMPORTANT: the W3Schools explanation of functions is pretty good for people who are used to C# and Java.  
With that said there is nothing else positive about the W3Schools tutorial of functions. The same thing applies to classes.  

### Declaration and definition

Functions need to be declared in a header file or at the top.  
This is so that when the program gets started and starts reading from top to bottom, it realizes that the function exists and can be called later on.  
Declaration should only occur once.  
Header files will be explained more thoroughly in its own chapter.

Functions can be defined anywhere as long as they were declared beforehand. Definition can also be done as the same time as declaration (except in the header file of course) but it is usually preferred for them to be declared in a header file.

### Function parameters

Function parameters in C++ differ quite a bit from their counterparts in C# and Java.  

There are three ways to use parameters:

- Pass-by-value: `void f(int x);` It creates a copy of the value and uses that in the function.  
- Pass-by-reference: `void f(int& x);` It uses the value itself instead of a copy of the value.  
- Read-only reference: `void f(const std::string& s);` Just like its name implies, it uses the reference but makes it read-only. This is the most common one to use. 

NOTE that Arrays are pass-by-reference by default.

### Default argument

Default arguments give a default value if a function gets called without a value and a default argument is provided.  
This needs to be in the definition.  

Default arguments only work from right to left!  

Note that virtual functions always use the original arguments value even if that value is overridden and should be avoided there because of it!  


### Memory management

Even tough C++ has no Garbage Collector, the values still get cleared after the function ends, unless it is made with `new`, in which case it needs to be deleted with `delete`.

Using `new` is a pretty bad practice tough and should be avoided if possible.  
Instead of using `new` it is preferred to use `std::make_unique`.  
Example: `auto p = std::make_unique<int>(5);`

### Dangling reference

A dangling reference is a reference to value inside a function.  
This value will be deleted after the function ends and the reference will reference a point in memory that no longer exists.

Example of what ***NOT*** to do: 
```
int& doNotDoThis(){
    int x;
    return x;
}

...

int& r = doNotDoThis();
```

If for some forsaken reason the reference of a value is needed, then make sure that that value is outside of the function.


### Function overloading

Functions can be overloaded, just like in C# and Java.

Watch out that the parameters differ!


### Global variables

Global variables can be accessed anywhere just like in C# and Java.

They should be only used when necessary.


### Recursion

Recursion is when a function calls itself over and over.  
They tend to get confusing.


## Lambda expressions

Lambda functions are somewhat confusing to grasp but also very useful.  
They are basically functions but treated as values.

### Syntax

Lambda functions consist of capture `[]`, parameters `()`, a return type `-> return_type` and a body `{ body };`  

Example: `[&x](int y) -> int { return x + y; };`  

Most parts are optional!

### Captures

Captures are used to capture the surrounding variables.  
The variables outside of lambdas can not be used inside the lambdas.

Note that capture makes a copy of the variable by default, but can also make references with the `&` before the variable.  
Alternatively by doing `[=]` all the values in the current scope can be copied and by doing `[&]` all values in the current scope can be referenced.

NOTE that using references can be very dangerous because it tends to create dangling references.

The captures are const by default but by using the `mutable` keyword on the lambda they can be changed.  
Example:
```
auto f = [x]() mutable {
    x++; // modifies the copy
};
```


### Generic lambdas (C++14+)

Pretty self explanatory:
```
auto add = [](auto a, auto b) {
    return a + b;
};

add(1, 2);
add(1.5, 2.3);
```

## Classes

Classes get quite confusing if one is accustomed to C# and Java.

There are many things that should be kept in mind when working with classes in Java, for instance that there is no garbage collector or that `const` needs to be used way more often and in places where C# and Java wouldn't even allow a `const` to be used.

### Declaration and definition

Just like with functions, the declaration and definition can (and should) be separated. Because of this, declarations can get really unreadable.  

Because of this one file should usually only contain one class and maybe its helpers.

### Constructors

Constructors in C++ work a bit differently then their counterparts in C# and Java.

In C++ constructors should always use member initializer lists unless the value needs to be manipulated before it gets set.

Example:  
MyClass.h:
```
#pragma once

#include <string>

class MyClass{
    private:
        int myNum_;
        std::string myString_;
    public:
        MyClass(int myNum, std::myString);
};
```
MyClass.cpp:
```
#include "MyClass.h"

MyClass::MyClass(int myNum, std::string myString) 
    : myNum_(std::max(0, myNum)), myString_(std::move(myString)) {} 
```
NOTE that the `std::max()` makes sure that `myNum` is positive and makes `myNum_` 0 if it isn't  
The `std::move()` basically transfers the ownership of the string `myString` to `myString_` which avoids copying (which would get really slow with large strings) but makes the `myString` unusable.

`std::move()` should always be used for strings.

The initializer list of a constructor should be used for the following:  
- Initializing member variables  
- Enforcing invariants  
- Passing arguments to member constructors  
- Initializing `const` members  
- Initializing references  

The body of a constructor should be used for the following:  
- Side effects
- Validation that can fail (throwing)
- Logging
- Registering with systems
- Acquiring resources that may fail
- Running code that depends on this being fully formed

### Destructor

Destructors clean up the memory after a class gets deleted (via manual deletion, running out of scope, etc).  

They can be defined with a `~`(*tilda*) and the class name.

It is the last thing called before the class gets completely removed.  

values assigned with `new` need to be deleted manually in the destructor. Everything else gets deleted automatically.


Example:
MyClass.h:
```
#pragma once

#include <string>

class MyClass{
    private:
        int myNum_;
        std::string myString_;
    public:
        MyClass(int myNum, std::myString);
        ~MyClass();
};
```
MyClass.cpp:
```
#include "MyClass.h"

MyClass::~MyClass(){
    // no manual cleanup
}
```
Alternatively they can be also done with `~MyClass() = default;`, where MyClass is the class name, if the body of the destructor is empty.

The body is useful for deleting values set with `new`, closing files and ending everything that won't be further used after the class gets deleted.

Destructors first destroy the class and then everything else in reverse order to the constructor.

### Using const

### Friend function

### Inheritance

### Polymorphism

### Virtual

### Templates

## Files

## Date & time

## Data Structures

## Namespaces   

## Header Files

## CMake

# Summary