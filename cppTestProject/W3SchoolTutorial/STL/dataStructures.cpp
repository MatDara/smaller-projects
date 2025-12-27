#include <iostream>

#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;

int main(){

    /*
        I'll probably write all the comments in a Markdown File after finishing the course.

        Data Structures are used to store and organize data.
        An Array is a data structure because it can save multiple data in a single value.
        C++ has many different data structures but these need to be included separately.
        They are part of the C++ STL (Standard Template Library)

        Here's a quick guide to all the important data structures:
        Vector: basically an Array-List. It can store multiple data and each entry has its own index.
        List: basically a Linked-List. The entries have no indexes.
        Stack: it stores data after the LIFO principe (the newest entry gets accessed). The entries have no indexes.
        Queue: it stores data after the FIFO principe (the oldest entry gets accessed). The entries have no indexes.
        Deque: entries can be accessed from both sides or by indexes.
        Set: basically a hashset. Only one instance of each entry can exist. The entries have no indexes.
        Map: basically a hashmap. Each entry has a key but no index. Keys can obviously not be reused.

        Algorithms include functions, like find() and sort() 
    */


    // Quick examples of these data structures:
    vector<string> sharkTypes = {"Goblin", "Lemon", "Salmon", "Bull", "Nurse", "Greenland"};

    for(string shark : sharkTypes){
        cout << "Shark type: " << shark << " Shark" << endl;
    }

    cout << "My favorite shark is the " << sharkTypes[2] << endl;
    cout << "The first shark on the list(vector) is: " << sharkTypes.front() << endl;
    cout << "The last shark on the list(vector) is: " << sharkTypes.back() << endl;
    cout << "Another great shark type is: " << sharkTypes.at(1) << endl; // at() has more advantages than [] and should be used when possible

    sharkTypes.at(5) = "Basking";

    sharkTypes.push_back("Tiger"); // adds at the end
    sharkTypes.pop_back(); // removes from the end
    
    cout << "Shark vector size: " << sharkTypes.size() << endl;

    cout << boolalpha;
    cout << "Is the vector empty: " << sharkTypes.empty() << endl;

    // Here is the complete guide to the library: https://www.w3schools.com/cpp/cpp_ref_vector.asp

    cout << "Max size: " << sharkTypes.max_size() << endl;

    // continue at C++ List

    return 0;
}