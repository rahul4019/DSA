#include <iostream>
using namespace std;

void printArraysum(int array[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    cout << sum << endl;
}

int main() {
    int n;
    cin >> n;
    int array[100];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    printArraysum(array, n);
    return 0;
}