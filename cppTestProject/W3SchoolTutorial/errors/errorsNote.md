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
Compile-time errors are the easiest to avoid because the IDE usually already notes those but even if the IDE for some reason wouldn't display a warning at the error, then the compiler will give us a descriptive enough error message for us to be able to figure out what the mistake was.

To avoid runtime errors, always look up how the used functions work, be careful with loops and indexes and try to make the code easily understandable so if an error happens, then it can be easily found and fixed.