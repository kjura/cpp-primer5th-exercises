#include <algorithm>
#include <iostream>
#include <vector>
#include <fstream>
 
using std::cout;
using std::vector;
using std::string;
using std::endl;

int main()
{
    // Print the size and contents of below vectors using iterators.
    
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    
    cout << "Size of v1 is: " << v1.size() << endl;
    cout << "Elements of v1: ";
    for (auto it = v1.cbegin(); it != v1.cend(); ++it){
        cout << *it << " ";
    }
    cout << "\n\n";


    cout << "Size of v2 is: " << v2.size() << endl;
    cout << "Elements of v2: ";
    for (auto it = v2.cbegin(); it != v2.cend(); ++it){
        cout << *it << " ";
    }
    cout << "\n\n";    

    
    cout << "Size of v3 is: " << v3.size() << endl;
    cout << "Elements of v3: ";
    for (auto it = v3.cbegin(); it != v3.cend(); ++it){
        cout << *it << " ";
    }
    cout << "\n\n"; 

    cout << "Size of v4 is: " << v4.size() << endl;
    cout << "Elements of v4: ";
    for (auto it = v4.cbegin(); it != v4.cend(); ++it){
        cout << *it << " ";
    }
    cout << "\n\n";     

    cout << "Size of v5 is: " << v5.size() << endl;
    cout << "Elements of v5: ";
    for (auto it = v5.cbegin(); it != v5.cend(); ++it){
        cout << *it << " ";
    }
    cout << "\n\n"; 

    cout << "Size of v6 is: " << v6.size() << endl;
    cout << "Elements of v6: ";
    for (auto it = v6.cbegin(); it != v6.cend(); ++it){
        cout << *it << " ";
    }
    cout << "\n\n";


    cout << "Size of v7 is: " << v7.size() << endl;
    cout << "Elements of v7: ";
    for (auto it = v7.cbegin(); it != v7.cend(); ++it){
        cout << *it << " ";
    }
    cout << "\n\n"; 



    
    return 0;
}
