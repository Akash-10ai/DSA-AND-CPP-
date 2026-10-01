// sum of all odd numbers from 1 to n.

#include<iostream>
using namespace std;

int main(){
    int n = 20;
    int sum = 0;
  
    // print  sum of odd number 
    for (int i =1; i<=n; i++){
        if (i%2 != 0){
            sum += i;
        }
    }
    cout << "Sum of all odd numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}