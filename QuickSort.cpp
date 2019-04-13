#include <iostream>
#include <stdio.h>
#include <Vector>
using namespace std;

int patition(int *num, int low, int high){
    int pivotkey = num[low];
    while(low < high){
        if(low < high && num[high] >= pivotkey) high--;
        num[low] = num[high];
        if(low < high && num[low] <= pivotkey) low++;
        num[high] = num[low];
    }
    num[low] = pivotkey;//!!!!!!!
    return low;
}

void qsort(int *num, int low, int high){
    if(low < high){
        int pivot = patition(num, low, high);
        qsort(num, low, pivot - 1);
        qsort(num, pivot + 1, high);
    }
}


int main(){
    int nums[7] = {5,2,9,18,52,7,1};
    for(int i = 0; i < 7; i++) cout<<nums[i]<<" ";
    cout<<"\n";
    qsort(nums, 0, 6);
    for(int i = 0; i < 7; i++) cout<<nums[i]<<" ";
    cout<<"\n";
    // vector<int> num;
    // while(true){
    //     int temp;
    //     cin>>temp;
    //     if (temp == 0) break;
    //     num.push_back(temp);
    // }
    // int length = num.size();
    // int *nums = new int[length];
    // for (int i = 0; i < length; i++){
    //     nums[i] = num.at(i);
    // }
    // for(int i = 0; i < length; i++) cout<<nums[i]<<" ";
    // cout<<"\n";
    // qsort(nums, 0, length - 1);
    // for(int i = 0; i < length; i++) cout<<nums[i]<<" ";
    // cout<<"\n";
    // setbuf(stdin,NULL);

    getchar();

    return 0;
}
