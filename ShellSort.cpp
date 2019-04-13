#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

using namespace std;

void shinsert(int *num, int dk){
    for (int i = dk; i < 77; i++){
        if (num[i] < num[i - dk]){
            int pt = num[i];
            int j;
            for (j = i - dk; j >= 0 && num[j] > pt; j -= dk){
                num[j + dk] = num[j];
            }
            num[j + dk] = pt;
        }
    }
}
void shsort(int *num, int *dlta, int t){
    for (int i = 0; i < t; i++){
        shinsert(num, dlta[i]);
    }
}
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
    srand((int)time(0));
    for (int i = 0; i < 3; i++){

        
	    LARGE_INTEGER frec;  
	    LARGE_INTEGER strt;  
	    LARGE_INTEGER ed;  
        
	    QueryPerformanceFrequency(&frec);  
	    QueryPerformanceCounter(&strt);
        int nums[77], nums1[77];
        for(int i = 0; i < 77; i++) {
            nums[i] = (int)rand() % 51;
            nums1[i] = nums[i];
        }
        //for(int i = 0; i < 17; i++) cout<<nums[i]<<" ";
        cout<<"\n\n";
        //insort(nums, 7);
        int dlta[5] = {16,12,8,4,1};

        QueryPerformanceCounter(&strt);
        shsort(nums, dlta, 5);
        QueryPerformanceCounter(&ed);  
        
        //for(int i = 0; i < 7; i++) cout<<nums[i]<<" ";
        cout<<"\nshtime:"<<(ed.QuadPart-strt.QuadPart)*1000000000/frec.QuadPart<<"\n";

        QueryPerformanceCounter(&strt);
        insort(nums1, 77);
        QueryPerformanceCounter(&ed);  
        
        //for(int i = 0; i < 7; i++) cout<<nums1[i]<<" ";
        cout<<"\nintime:"<<(ed.QuadPart-strt.QuadPart)*1000000000/frec.QuadPart<<"\n";
        cout<<"\n";
    }
    

    getchar();
}