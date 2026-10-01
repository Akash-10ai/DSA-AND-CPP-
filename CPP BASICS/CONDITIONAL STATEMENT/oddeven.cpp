// program to check whether a number is odd or even

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;

    if(n%2 == 0){
        cout<<"number is even\n";
    }else{
        cout<<"number is odd\n";
    }
    return 0;
    }