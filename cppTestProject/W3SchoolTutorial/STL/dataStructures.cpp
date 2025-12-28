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

    // C++ List
    // Lists are similar to vectors but they don't have indexes and both the back and the front can be added or removed.
    
    cout << "\n\nLists:\n";

    list<string> sharkTypesList = {"Goblin", "Lemon", "Salmon", "Bull", "Nurse", "Greenland"};

    for(string shark : sharkTypesList){
        cout << "Shark type: " << shark << " Shark" << endl;
    }

    cout << "First shark type: " << sharkTypesList.front() << endl;
    cout << "Last shark type: " << sharkTypesList.back() << endl;

    sharkTypesList.front() = "Tiger";
    sharkTypesList.back() = "Zebra";

    sharkTypesList.push_back("Hammerhead"); // adds to the back
    sharkTypesList.push_front("Blacktip"); // adds to the front

    sharkTypesList.pop_back(); // removes from the back
    sharkTypesList.pop_front(); // removes from the front

    // it also has .empty() and .size()
    // it can not be looped trough with a for loop because it has no indexes


    //Stacks

    cout << "\n\nStacks:\n";

    stack<string> sharkTypesStack;

    // stacks can not be declared with elements like lists or vectors
    // Gives an error: stack<string> sharkTypesStackError = {""};

    sharkTypesStack.push("Great White");
    sharkTypesStack.push("Bull");
    sharkTypesStack.push("Lemon");
    sharkTypesStack.push("Salmon");

    cout << "Stack top: " << sharkTypesStack.top();

    //the top value can also be changed with .top()

    sharkTypesStack.top() = "Angel";

    // the top can be removed with .pop();

    sharkTypesStack.pop();
    cout << "Stack top: " << sharkTypesStack.top();

    // it also has .size() and .empty()
    // it also has no index


    cout << "\n\nQueues:\n";

    // basically the same as with the stack but the last pushed variable gets popped

    queue<string> sharkTypesQueue;

    sharkTypesQueue.push("Great White");
    sharkTypesQueue.push("Lemon");
    sharkTypesQueue.push("Salmon");

    cout << sharkTypesQueue.front() << endl;
    cout << sharkTypesQueue.back() << endl;
     
    sharkTypesQueue.pop();

    cout << sharkTypesQueue.front() << endl;

    // it also has .size() and .empty()
    // it also has no index


    

    cout << "\n\nDeques:\n";

    // Deques are a combination of queues and stacks where both ends can be pushed and popped
    // Unlike queues and stacks, deques do have indexes and they can be initialized with values.

    deque<string> sharkTypesDeque = {"Great White", "Lemon", "Salmon"};

    sharkTypesDeque.push_back("Whale");
    sharkTypesDeque.push_front("Hammerhead");

    sharkTypesDeque.pop_back();
    sharkTypesDeque.pop_front();

    sharkTypesDeque.at(1) = "Greenland";

    // also has .size() and .empty()


    

    return 0;
}