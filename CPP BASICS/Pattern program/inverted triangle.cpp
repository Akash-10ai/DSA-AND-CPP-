// pattern program to print inverted  triangle

#include <iostream>
using namespace std;
int main(){
    int n = 4;

    for(i=0; i<n; i++){
        for(j=0; j<i; j++){  // i times space will be printed
            cout<< " ";
        }

        // nums 
        for(j=0; j<n-i; j++){  // n-i times number will be printed
            cout<< (i+1) << ;
        }
        cout << endl;
    }

    return 0;
}