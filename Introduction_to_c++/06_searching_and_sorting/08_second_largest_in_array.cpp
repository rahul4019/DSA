#include <iostream>
using namespace std;

int secondLargest(int *arr, int n) {
    int largest = INT_MIN;
    int secondLargest  = INT_MIN;

    for (int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr []= {1, 13, 4, 1, 3, 2, 28};
    cout << secondLargest(arr,  7);
}