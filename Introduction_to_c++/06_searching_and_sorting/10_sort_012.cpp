#include<iostream>
using namespace std;

void sort012(int *arr, int n) {
    int i = 0;
    int nextZero = 0;
    int nextTwo = n-1;

    while ( i <= nextTwo) {
        if(arr[i] == 0) {
            int temp = arr[nextZero];
            arr[nextZero] = 0;
            arr[i] = temp;
            nextZero++;
            i++;
        }
        else if (arr[i] == 2) {
            int temp = arr[nextTwo];
            arr[nextTwo] = 2;
            arr[i] = temp;
            nextTwo--;
        }
        else{
            i++;
        }
    }
    
}

int main(){
    int arr[] = {0, 1, 2, 0, 2, 0, 1};
    // int arr[] = {2, 2, 0, 1, 1};
    // int arr[] = {2, 0};

    sort012(arr, 7);
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}