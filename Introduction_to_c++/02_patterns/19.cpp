// ---1
// --121
// -12321
// 1234321


#include <iostream>
using namespace std;

void printPattern(int num) {
    for (int i = 1; i <= num; i++) {
        // prints spaces
        for (int j = 1; j <= num - i; j++) {
            cout << ' ';
        }
        // prints left numbers
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        // prints right numbers
        int val = i - 1;
        for (int l = 1; l <= i - 1; l++) {
            cout << val;
            val--;
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