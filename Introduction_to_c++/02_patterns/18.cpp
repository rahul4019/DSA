// 4444
// 333
// 22
// 1


#include <iostream>
using namespace std;

void printPattern(int num) {
    for (int i = 1; i <= num; i++) {
        int val = num - i + 1;
        for (int j = 1; j <= num - i + 1; j++) {
            cout << val ;
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