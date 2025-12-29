#include <iostream>

#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

#include <algorithm>

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

    cout << "Deque front: " << sharkTypesDeque.front() << endl;
    cout << "Deque back: " << sharkTypesDeque.back() << endl;

    sharkTypesDeque.push_back("Whale");
    sharkTypesDeque.push_front("Hammerhead");

    cout << "Deque front: " << sharkTypesDeque.front() << endl;
    cout << "Deque back: " << sharkTypesDeque.back() << endl;

    sharkTypesDeque.pop_back();
    sharkTypesDeque.pop_front();
    
    cout << "Deque front: " << sharkTypesDeque.front() << endl;
    cout << "Deque back: " << sharkTypesDeque.back() << endl;

    cout << "Deque at 1: " << sharkTypesDeque.at(1) << endl;

    sharkTypesDeque.at(1) = "Greenland";

    cout << "Deque at 1: " << sharkTypesDeque.at(1) << endl;

    // also has .size() and .empty()


    
    cout << "\n\nSets:\n";

    // sets are more or less the same as in other languages
    // they can't have duplicate elements and they don't have indexes

    set<string> sharkTypesSet = {"Lemon", "Salmon", "Zebra", "Great White", "Lemon"}; // the duplicate Lemon will be removed

    // the values can not be changed, only added or removed
    // the elements get sorted automatically in ascending order
    for(string shark : sharkTypesSet){
        cout << shark << endl;
    }

    // elements can be added and removed with .insert() and .erase()

    sharkTypesSet.insert("Blacktip");
    sharkTypesSet.erase("Salmon");

    cout << endl;

    for(string shark : sharkTypesSet){
        cout << shark << endl;
    }

    cout << endl;

    // the set can also be stored in descending order
    set<string, greater<string>> sharkTypesSetDesc = {"Lemon", "Salmon", "Zebra", "Great White"};
    for(string shark : sharkTypesSetDesc){
        cout << shark << endl;
    }
    
    //Sets also have the .clear(), .size() and .empty() functions.




    cout << "\n\nSets:\n";

    // Just like in other languages maps elements consist of a value and key
    // key types are declared first and value types second
    // all keys have to be unique
    map<string, string> sharkTypesMap = {{"gw", "Great White"}, {"s", "Salmon"}, {"l", "Lemon"}};

    // the keys can be accessed just like indexes can

    cout << "gw: " << sharkTypesMap["gw"] << endl;
    cout << "s: " << sharkTypesMap.at("s") << endl;

    // values can also be changed
    sharkTypesMap.at("s") = "Sleeper";

    cout << "s: " << sharkTypesMap.at("s") << endl;

    // Elements can be added like this:
    sharkTypesMap["z"] = "Zebra";

    // and like this:
    sharkTypesMap.insert({"gl", "Greenland"});

    // the key difference between .insert() and just using [] is 
    // that if the value already exists then the brackets [] overwrite it
    // but .insert() ignores the new value and keeps the old one

    sharkTypesMap["s"] = "Salmon";
    cout << "s: " << sharkTypesMap.at("s") << endl;

    sharkTypesMap.insert({"s", "Sleeper"});
    cout << "s: " << sharkTypesMap.at("s") << endl;

    sharkTypesMap.erase("l"); // removes "Lemon"

    // .clear(), .size() and .empty() also work

    // it can also be checked if a specific element exists with the .count(key) function where key is the key
    cout << "Does \"l\" exist: " << sharkTypesMap.count("l") << endl;

    // surprisingly enough, maps can be looped trough with a for-each loop
    // Either use the auto keyword or the pair keyword
    cout << "Shark map Loop:\n"; 
    for(pair shark : sharkTypesMap){
        cout << shark.first << " is: " << shark.second << endl;
    }



    // Iterators:
    // Iterators (just like it's name implies) iterates trough elements of data structures
    // NOTE: They don't work on stacks and queues

    vector<string>::iterator it;

    cout << "\n\nIterator:\n";

    // iterators are mainly used for manipulating elements in data structures
    // they are also very usefull for code reusability
    for(it = sharkTypes.begin(); it != sharkTypes.end(); ++it){
        cout << *it << endl;
    }

    // the .begin() and .end() are basically indexes
    // by doing .begin() + number or .end() - number, where number is an int, a specific elements can be selected
    // NOTE: .end() points to after the last element


    cout << ".end(): " << *sharkTypes.end(); //points to "Tiger" because the first index of sharkTypesList is "Tiger"
    // and the first element of the sharkTypesList is located after the last sharkTypes element in the memory

    
    cout << "\n\nReverse iterator:\n";

    // the iterator can also go in reverse order
    // in this case the iterator has to be a reverse_iterator type
    for(reverse_iterator it = sharkTypes.rbegin() + 2; it != sharkTypes.rend(); ++it){
        cout << *it << endl;
    }

    vector<int> isUneven = {1, 2, 3, 4, 5};
    
    vector<int>::iterator isUnevenIterator;

    for(isUnevenIterator = isUneven.begin(); isUnevenIterator != isUneven.end(); ++isUnevenIterator){
        if(*isUnevenIterator % 2 == 0){
            *isUnevenIterator = 0;
        }
        else{
            *isUnevenIterator = 1;
        }

        cout << *isUnevenIterator << endl;
    }

    // NOTE: remember that maps give the pair type which consists of the key and the variable

    // Algorithms:
    // Algorithms need to be included trough the <algorithm> library

    cout << "\nSharks sorted:\n";

    sort(sharkTypes.begin(), sharkTypes.end());

    for(string shark : sharkTypes){
        cout << shark << endl;
    }

    cout << "\nSharks sorted in reverse order:\n";

    sort(sharkTypes.rbegin(), sharkTypes.rend());

    for(string shark : sharkTypes){
        cout << shark << endl;
    }



    
    // continue at C++ Algorithms chapter

    return 0;
}