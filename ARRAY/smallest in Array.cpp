// to find the smallest element in  an array 
#include<iostream>
using namespace std;

int main(){
    int nums [] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        if(nums[i] < smallest) {
            smallest = nums[i]
        }
    }

    cout << "smallest = " << smallest << endl;
    return 0;
}
   