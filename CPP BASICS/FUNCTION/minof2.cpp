#include<iostream>
using namespace std;

// sum of 2 number

double sum(double a, double b) {
    double s = a + b;
    return s;
}

// min of 2 number
int minOfTwo(int a, int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}