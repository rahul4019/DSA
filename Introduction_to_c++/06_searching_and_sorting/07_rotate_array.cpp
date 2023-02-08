#include<iostream>
using namespace std;

void rotateArray(int *arr, int n, int x){
    for (int i = 0; i < x; i++){
        int temp = arr[0];
        for (int j = 1; j < n; j++){
            arr[j-1] = arr[j];
        }
        arr[n-1] = temp; 
    }

    return;
}

int main(){
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    rotateArray(arr, 7, 2);

    for( int i = 0 ; i < 7; i++)  {
        cout << arr[i] << " ";
    }   

    return 0;
}
