#include<iostream>
using namespace std;

// function defination
void printHello() {
    cout << "hello\n";
}

int main() {
     // function call /invoke
     printHello();
    return 0;


}



// by integer method

int printHello() {
    cout << "hello\n";
    return 3;
}

int main() {
    
    int val = printHello();
    
    return 0;
}