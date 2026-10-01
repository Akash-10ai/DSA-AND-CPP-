// find character is upper case or lower case

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter a character";
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"character is upper case\n";
    }else if(ch>='a' && ch<='z'){
        cout<<"character is lower case\n";
    }
    return 0;
}

// acc to ascii value of character, if it is between 65 to 90 then it is upper case and if it is between 97 to 122 then it is lower case.


if (ch>= 65 && ch<= 90) {
    cout<<"character is upper case\n";
}else if(ch>= 97 && ch<= 122){
    cout<<"character is lower case\n";
}
