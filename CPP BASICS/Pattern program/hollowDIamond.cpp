// pattern program to print hollow diamond pattern
#include <iostream>
using namespace std;
int main(){

    int n = 4;

    // top part

    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<< " "; 
        }

        cout<< "*";

        if(i !=0) {
            //spaces
            for(int j=0; j<2*i-1; j++){
                cout << " ";
            }
            
            cout << "*";

        }
        cout << endl;
    }

    // bottom half

    for (int i = n - 2; i >= 0; i--){
        // outer spaces
        for (int j = 0; j < n - i - i; j++){
            cout<< " ";
        }

        cout << "*";

        if (i != 0){
          // inner spaces between stars

          for(int j = 0; j < 2 * i - 1; j++){
            cout<<" ";
          }

          cout<<"*";
        }
        cout<< endl;
    }

    return 0;
}
