// 1
// 23
// 345
// 4567


#include <iostream>
using namespace std;

void printPattern(int num) {
    for (int i = 1; i <= num; i++) {
        int val = i;
        for (int j = 1; j <= i; j++) {
            cout << val;
            val++;
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