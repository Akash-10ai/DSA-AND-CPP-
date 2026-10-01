#include <iostream>
using namespace std;

int main() {
    char grade = 'a'; // 97

    int value = grade; // implicit type casting
    cout << value << endl;
  
    // explicit type casting

    double price = 100.99;

    int newPrice = (int)price; // C style type casting
    cout << newPrice << endl;

    return 0;
    
}