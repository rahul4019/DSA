// 1
// 22
// 333
// 4444

#include <iostream>
using namespace std;

void printPattern(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
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