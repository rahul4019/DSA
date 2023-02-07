#include<iostream>
using namespace std;

void insertionSort(int *arr, int n){
    for (int i = 1; i < n; i++){
        int j = i;
         while( j > 0 && arr[j] < arr[j-1] ){
            // swapping
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
         }
    }

    return;
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};

    insertionSort(arr, 5);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}