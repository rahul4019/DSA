#include <iostream>
using namespace std;

void swapAlternate(int* arr, int n) {

    int i = 0;
    int j = 1;

    while (i < n && j < n) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i += 2;
        j += 2;
    }

}

int main() {
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    swapAlternate(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }



    return 0;
}