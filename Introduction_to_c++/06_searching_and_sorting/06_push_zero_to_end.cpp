#include<iostream>
using namespace std;

void pushZerosToEnd(int *arr, int n){
    int start = 0; 
    int end = n-1;

    while (start < end) {
        if(arr[start] == 0 && arr[end] != 0) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        else if (arr[start] != 0 && arr[end] == 0){
            start++; end--;
        }
        else if (arr[start] == 0 && arr[end] == 0) {
            end--;
        }
        else if (arr[start] != 0 && arr[end] != 0) {
            start++;
        }
        else{
            start++; end--;
        }

    }

    return;
}

int main(){
    // int arr[] = {2, 0 , 0, 1, 3, 0, 0};
    // int arr[] = {5, 8, 7, 4, 3, 1 };
    int arr[] = {5, 0, 7, 4, 8, 1, 3, 0, 7, 2, 0 };

    pushZerosToEnd(arr, 11);

    for( int i = 0 ; i < 11; i++)  {
        cout << arr[i] << " ";
    }   

    return 0;
}