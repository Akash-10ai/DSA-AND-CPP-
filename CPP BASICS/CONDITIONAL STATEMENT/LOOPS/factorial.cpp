// program to find factorial of a number 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;

    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    cout<<"factorial of "<<n<<" is "<<fact<<endl;`
    return 0;
}