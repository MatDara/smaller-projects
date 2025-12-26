# C++ Errors

The "C++ Errors" chapter only consists of theory, so I'll just write a short summary of that.

## C++ Errors
An error can occur either at compile-time or at runtime.

### Compile-Time Errors
Compile-time errors are usually mistakes with the syntax (using a variable that wasn't assigned yet, forgetting a semicolon, using the wrong type, ...)

These errors get caught before the program even begins to run during the compiling.

### Runtime Errors
Runtime errors are logical mistakes within the code itself (dividing by zero, trying to access an index outside the bounds of an array, using deleted memory, ...)

### Things to look out for to avoid errors
Compile-time errors are the easiest to avoid because the IDE usually warns about those but even if the IDE for some reason didn't display a warning at the error, the compiler will still give us a descriptive error message when trying to run the program.

To avoid runtime errors, always look up how the functions that are being used work, be careful with loops and indexes and try to make the code easily understandable so that errors can be easily found and fixed.


## C++ Debugging

There are two ways to debug: manually debugging and debugging with built in debuggers.

### Manually Debugging
Manually Debugging is the simplest form of debugging. If something isn't working then just check the variables that you are guessing are most likely working incorrectly and print out messages how far the program runs before crashing. This method of debugging can be done very quickly and does not require the help of any built in debugger from an IDE. Most of the times this is enough for a bug to be found but in cases where the code gets very complicated or you have absolutely no clue what and where is not working, this approach might become annoying.

### Debugging with debuggers
Most IDEs have an already built in debugger. With the help of these debuggers, breakpoints can be placed in the code, so that you can look at all the variables in the current scope and what exactly the code is doing line by line. Note that the debugger change depending on what IDE is use.

### Exception Handling
Some errors may only happen if specific things happen in the code (like if the user decides to divide by 0). 

Exception handling is a way to deal with errors while the program is running and run specific code when something goes wrong.


## C++ Exceptions
Exceptions are errors that only get triggered in specific case. 

When an error is triggered then C++ will throw an exception.

These exceptions can be caught in the code using the keywords `try` and `catch` (just like in other languages).

The code itself can also throw exceptions using the keyword `throw`

### Example:
`try {   
  // Code that may throw an exception   
  throw 505;   
}   
catch (int errorCode) {   
  cout << "Error occurred: " << errorCode;   
}`

## C++ Input Validation
Never trust the user input! Always validate it by checking if the input is allowed. If it is invalid then try asking the user for a valid input again or just throw an error.

The `cin` object from the `iostream` library is very useful for getting and validating user input. Look it up how exactly it works!

