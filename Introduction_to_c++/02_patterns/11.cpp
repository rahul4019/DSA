// ABCD
// ABCD
// ABCD
// ABCD

#include <iostream>
using namespace std;

void printPattern(int num) {
    for (int i = 1; i <= num; i++) {
        char ch = 'A';
        for (int j = 1; j <= num; j++) {
            cout << ch;
            ch++;
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