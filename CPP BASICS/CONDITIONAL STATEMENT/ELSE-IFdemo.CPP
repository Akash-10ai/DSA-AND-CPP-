// ELSE- IF STATEMENT DEMO 

// GRADE SYSTEM 

#include<iostream>
using namespace std;

int main(){
int marks;
cout << "enter your marks";
cin >> marks;

if (marks>=90) {
    cout<<"Grade A\n";
}elseif{marks >= 80 && marks < 90} {
    cout<<"Grade B\n";
} else{ 
    cout <<"Grade C\n";
}
return 0;
}