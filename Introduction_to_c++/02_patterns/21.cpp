// ---1
// --232
// -34543
// 4567654


#include <iostream>
using namespace std;

void printPattern(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num - i; j++) {
            cout << ' ';
        }
        int val1 = i;
        for (int k = 1; k <= i; k++) {
            cout << val1;
            val1++;
        }
        int val2 = (i * 2) -2;
        for (int l = 1; l <= i -1; l++) {
            cout << val2;
            val2--;
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