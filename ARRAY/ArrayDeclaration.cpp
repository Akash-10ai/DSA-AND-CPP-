#include<iostream>
using namespace std;

int main(){
    int a[5];                        // decleared, NOT initialized (garbage value for local array )
    int b[5] = {10, 20, 30, 40, 50}; // fully initializec
    int c[5] = {1, 2};               // remaining element become 0 -> {1, 2, 0, 0, 0}
    int d[5] = {};                   // all zeroes
    int e[] = {7, 8, 9};             // size deduced by compiler = 3
    int f[5] = {0};                  // all zeroes (first is 0, rest default to 0)
}