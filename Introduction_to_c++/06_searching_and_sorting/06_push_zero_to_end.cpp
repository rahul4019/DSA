#include<iostream>
using namespace std;

void pushZerosToEnd(int *arr, int n){
    // for (int i = 0; i < n - 1; i++){
    //     int j = i + 1;
    //     while ( j > 0 && arr[j-1] == 0) {
    //         arr[j-1] = arr[j];
    //         arr[j] = 0;
    //         j--;
    //     }
    // }

    int i = 0; 
    int j = 1;

    while( i < n && j < n) {
        if(arr[i] != 0 && arr[j] == 0) {
            i++; j++;
        }
        else if (arr[i] == 0 && arr[j] == 0) {
            j++;
        }
        else if (arr[i] == 0 && arr[j] != 0) {
            arr[i] = arr[j];
            arr[j] =  0;
            i++; j++;
        }else {
            i++; j++;
        }
    }

    return;
}

int main(){
    // int arr[] = {2, 0 , 0, 1, 3, 0, 0};
    int arr[] = {5, 8, 7, 4, 3, 1 };
    // int arr[] = {5, 0, 7, 4, 8, 1, 3, 0, 7, 2, 0 };
    // int arr[] = {0, 3, 0, 2, 0};
    // int arr[] = {9, 0, 0, 8, 2};

    pushZerosToEnd(arr, 6);

    for( int i = 0 ; i < 6; i++)  {
        cout << arr[i] << " ";
    }   

    return 0;
}
