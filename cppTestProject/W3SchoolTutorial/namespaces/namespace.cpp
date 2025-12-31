#include <iostream>
#include <string>

// not using a namespace like std is usually better for larger projects
// using std:: instead makes the code clearer and helps avoid conflicts

// to make new namespaces just do the following

namespace namespaceTest{
    // string is in the std namespace so even if it is included, the std:: needs to be written befor it
    // same with STLs like vectors and lists
    std::string veryImportantString = "Shark";
}


int main(){
    std::cout << "Hello World!" << std::endl;
    std::cout << namespaceTest::veryImportantString << std::endl;

    return 0;
}

// the W3Schools Tutorial is complete :Yaya: