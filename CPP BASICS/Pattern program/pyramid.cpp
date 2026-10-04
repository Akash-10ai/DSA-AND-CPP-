// pattern program to print pyramid

#include <iostream>
using namespace std;  
int main(){
    int n = 4;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<< " ";  // n-i times space will be printed
        }
          // nums : i+1 
          for(int j=0; j<i+1; j++){
            cout<< j;
          }
          
          // nums : 2

          for(int j=i; j>=1; j--){
            cout<<j;
          }
          cout<<endl;
    }

    return 0;

}