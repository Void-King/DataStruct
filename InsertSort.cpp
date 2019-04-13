#include <iostream>
#include <stdlib.h>

using namespace std;

void insort(int *num, int length){
    for (int i = 1; i < length; i++){
        if (num[i] < num[i - 1]){
            int pt = num[i];
            int j;
            for (j = i - 1; j >= 0 && num[j] > pt; j--){
                num[j + 1] = num[j];
            }
            num[j + 1] = pt;
        }
    }
}


int main(){

    int nums[7] = {5,2,9,18,52,7,1};
    for (int i = 0; i < 7; i++){
        nums[i] = (int)rand() % 51;
    }
    for(int i = 0; i < 7; i++) cout<<nums[i]<<" ";
    cout<<"\n";
    insort(nums, 7);
    for(int i = 0; i < 7; i++) cout<<nums[i]<<" ";
    cout<<"\n";

    getchar();
}