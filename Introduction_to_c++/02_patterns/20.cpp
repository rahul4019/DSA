// ---*
// --***
// -*****
// *******1


#include <iostream>
using namespace std;

void printPattern(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num - i; j++) {
            cout << ' ';
        }
        for (int k = 1; k <= i * 2 - 1; k++) {
            cout << '*';
        }
        cout << endl;
    }
    return;
}

int main() {
    int num;
    cin >> num;

    printPattern(num);

    return 0;
}