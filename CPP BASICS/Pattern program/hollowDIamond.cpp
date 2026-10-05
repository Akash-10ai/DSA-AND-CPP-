// pattern program to print hollow diamond pattern
#include <iostream>
usinf namespace std;
int main(){

    int n = 4;

    // top part

    for(i=0; i<n; i++){
        //spaces
        for(j=0; j<n-i-1; j++){
            cout<< " "; 
        }

        cout<< "*";

        if(i ! =0) {
            //spaces
            for(j=0; j<2*i-1; j++){
                cout << " ";
            }
            
            cout << "*";

        }
        cout << endl;
    }

    return 0;
}