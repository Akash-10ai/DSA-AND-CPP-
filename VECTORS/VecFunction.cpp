#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ;

    cout << "size =" << vec.size() << endl;  // size function 
    vec.push_back(25);                       // push_back function
    vec.push_back(30);
    vec.push_back(35);

    cout << "after push back size =" << vec.size() << endl;

    vec.pop_back(); // 35                    // pop_back function

    cout << vec.front() << endl;             // front function to retrive element on first index

    cout << vec.back()  << endl;             // back function to retrive element at  last index

    cout << vec.at(0) << endl;               // at function to retrive element at specific index

   
    return 0;
}