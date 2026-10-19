// cpp program to convert binary num to decminal number

#include<iostream>
using namespace std;

int BinToDecimal(int BinNum){
    int ans = 0, pow = 1;

    while(BinNum > 0){
        int rem = BinNum % 10;
        ans += rem * pow;

        BinNum /= 10;
        pow *= 2;
    }

    return ans; // decimal form
}

int main(){
    cout << BinToDecimal(1010) << endl;
    return 0;
}