#include <iostream>
using namespace std;

int searchInArray(int array[], int n, int x) {

    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n, x;
    cin >> n;
    int array[100];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cin >> x;

    cout << searchInArray(array, n, x) << endl;
    return 0;
}