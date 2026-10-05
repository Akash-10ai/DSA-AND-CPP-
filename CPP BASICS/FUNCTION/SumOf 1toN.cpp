// to calculate sum of 1 to n numbers by using function
#include<iostream>
using namespace std;

void sumN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << sumN(5)  << endl;
    cout << sumN(10) << endl;
    return 0;
}
