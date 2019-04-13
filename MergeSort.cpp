#include <iostream>

using namespace std;

void msort(){

}


int main(){

    int nums[7] = {5,2,9,18,52,7,1};
    for(int i = 0; i < 7; i++) cout<<nums[i]<<" ";
    cout<<"\n";
    msort(nums, 0, 6);
    for(int i = 0; i < 7; i++) cout<<nums[i]<<" ";
    cout<<"\n";

    getchar();
}