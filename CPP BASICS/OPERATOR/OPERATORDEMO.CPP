#include<iostream>
using namespace std;

int main(){
    int a = 10, b = 5;

    cout << "sum = " << (a + b) << endl;
    cout << "difference = " << (a - b) << endl;
    cout << "product = " << (a * b) << endl;
    cout << "division = " << (a / b) << endl; //2
    cout << "modulo = " << (a % b) << endl; // 0
return 0;
} 


// relational operators
 {
cout << (3<5) << endl; // true
cout << (3>5) << endl; // flase 
cout << (3<=3) << endl; // true
cout << (3==3) <<endl; // true
cout << (3!=5) <<endl; // true
return 0;
}


// logical operators
{
    cout << (3<5 && 3>5) << endl; // false
    cout << (3<5 || 3>5) << endl; // true
    cout << !(3<5) << endl; // false
    return 0;
}

// unary operators
{
    int a = 10;
    cout << a++ << endl; // 10
    cout << ++a << endl; // 12
    cout << a-- << endl; // 12
    cout << --a << endl; // 10
    return 0;
}