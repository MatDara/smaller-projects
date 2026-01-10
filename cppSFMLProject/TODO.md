TODO:
# Architecture design

## Start  
When the program starts, there should be an selection menu to select what class it should start.  

### Starting class

A class that is defined as default in the code.  

The starting class should not derive from the Program class, because it needs special variables for it to be able to edit the current program.


## Abstract class: Program
The start class is going to needs a vector of classes that it will be able to call. To achieve this there needs to be an abstract class that has the virtual functions call(), end() and optionally nameGetter().

### call()  
This will be the function that get's called to initialize a program.

### end()  
This function will be responsible to getting back to the start menu.

### nameGetter()
This class is going to return the name of the class to be displayed in the menu.