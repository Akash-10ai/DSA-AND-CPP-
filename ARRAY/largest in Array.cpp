#include<iostream>
using namespace std;

int main(){
    int nums [] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    int largest = INT_MIN;

    for(int i=0; i<size; i++){
        if(nums[i] > largest) {
            largest = nums[i];
        }
    }

    cout << "largest = " << largest << endl;
    return 0;
}
   