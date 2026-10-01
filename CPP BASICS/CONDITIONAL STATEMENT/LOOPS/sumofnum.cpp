// sum of numbers from 1 to n.

#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int sum = 0;

    for (int i =1; i<=n; i++){
        sum += i;
        if (i==5){
            break; // break statement will terminate the loop when i is equal to 5
        }
    }

    cout<< "sum : " << sum << endl;
    return 0;
}