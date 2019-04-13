#include <iostream>
#include <stdio.h>

using namespace std;

void bsort(int *num, int low, int high){

    for(int i = high; i > low; i--){
        for(int j = low; j < i; j++){
            if (num[j] >= num[j + 1]){
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}

int main(){

    int nums[7] = {5,2,9,18,52,7,1};
    for(int i = 0; i < 7; i++) cout<<nums[i]<<" ";
    cout<<"\n";
    bsort(nums, 0, 6);
    for(int i = 0; i < 7; i++) cout<<nums[i]<<" ";
    cout<<"\n";

    getchar();
}