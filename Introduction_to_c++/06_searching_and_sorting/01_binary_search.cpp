#include <iostream>
using namespace std;

int binarySearch(int* arr, int n, int x) {

    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start+end) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] > x) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return -1;
}

int main() {
    int n, x;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    cout << binarySearch(arr, n, x) << endl;
    return 0;
}