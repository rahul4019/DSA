#include<iostream>
using namespace std;

int checkRotation (int *arr, int n) {
    for(int i = 0; i < n - 1; i++) {
         if(arr[i] > arr[i+1]){
            return i+1;
         }
    }
    return -1;
}

int main(){
    // int arr[] = {5, 6, 1, 2, 3, 4};
    // int arr[] = {3, 6, 8, 9, 10};
    int arr[] = {10, 20, 30, 1};
    
    cout << checkRotation(arr, 5);
    return 0;
}