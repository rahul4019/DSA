// E
// DE
// CDE
// BCDE
// ABCDE

#include <iostream>
using namespace std;

void printPattern(int num) {
    for (int i = 1; i <= num; i++) {
      char ch = 64 + num - i + 1;
        for (int j = 1; j <= i; j++) {
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