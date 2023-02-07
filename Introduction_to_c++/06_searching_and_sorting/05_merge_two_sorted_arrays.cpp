#include<iostream>
using namespace std;

void mergeTwoSortedArrays(int *arr1, int len1, int *arr2, int len2) {
    int output[len1+len2];

    int outputIndex = 0;
    int start1 = 0; 
    int start2 = 0;

    while(start1 < len1 && start2 < len2) {
        if(arr1[start1] <= arr2[start2]) {
            output[outputIndex] = arr1[start1];
            start1++;
        }else{
            output[outputIndex] = arr2[start2];
            start2++;
        }
        outputIndex++;
    }

    while(start1 < len1) {
        output[outputIndex]  = arr1[start1];
        start1++;
        outputIndex++;
    }

    while(start2 < len2) {
        output[outputIndex]  = arr1[start2];
        start2++;
        outputIndex++;
    }

    for(int i = 0; i < len1 + len2; i++){
        cout << output[i] << " ";
    }
    
    return;
}

int main(){
    int arr1[] = {1, 3, 3, 5, 8};
    int arr2[] = {2, 4, 4, 5, 6};

    mergeTwoSortedArrays(arr1, 5, arr2, 5);

    return 0;
}