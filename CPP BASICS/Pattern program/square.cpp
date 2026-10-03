// to print square pattern using nestetd loop 

#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i=0; i<=n-1; i++){  // outer loop for rows

        for(int j = 0; j<=n-1; j++) // inner loop for columns
            cout << "j";
        cout << endl;
    }
     
    return 0;
}