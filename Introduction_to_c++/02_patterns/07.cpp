// 1
// 23
// 456
// 78910


#include <iostream>
using namespace std;

void printPattern(int num) {
    int val = 1;
    for (int i = 1; i <= num; i++) {
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