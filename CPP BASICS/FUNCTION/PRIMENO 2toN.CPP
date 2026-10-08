// to print prime number 2 to n times 


#include<iostream>
using namespace std;

 // Numbers less than or equal to 1 (like 0 and 1) are not prime

bool isPrime(int num) {
    if (num <=1) {
        return false;
    }

    for(int i=2; i<=num; i++) {  
        if (num%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    cout << "enter the number";
    cin >> n;

    cout << "prime nummbers between 2 to " << n << " are:" << endl;

    for(int i = 2; i <= n; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
