#include<iostream>
using namespace std;

// sum of 2 number

double sum(double a, double b) {
    double s = a + b;
    return s;
}

// min of 2 number
int minOfTwo(int a, int b) {    // parameters
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << sum(10,5) << endl;  // argument
    cout << minOfTwo(10,5) << endl; // argument 

    return 0;
}
