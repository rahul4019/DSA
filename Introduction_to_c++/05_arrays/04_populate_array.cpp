#include <iostream>
using namespace std;

void populateArray(int array[], int n) {
    int num = 1;
    int head = 0;
    int tail = n - 1;

    while (head <=tail) {
        if (num % 2 != 0) {
            array[head] = num;
            head++;
        }
        else {
            array[tail] = num;
            tail--;
        }
        num++;
    }

    for (int i = 0; i < n; i++) {
        cout << array[i];
    }

    return;
}

int main() {
    int n;
    cin >> n;
    int array[100];

    populateArray(array, n);
    return 0;
}