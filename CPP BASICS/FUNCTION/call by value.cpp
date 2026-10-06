//pass by value 
//In this method, the value of the actual parameter is copied to the formal parameter of the function.

#include<iostream>
using namespace std;

int changeX(int x) {
    x = 2*x;
    cout << "x = " << x << endl;
}

int main() {
    int x =5;
    changeX(x);

    cout << "x = " << x << endl;
    return 0;
}