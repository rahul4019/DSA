// 1
// 23
// 345
// 4567
// 56789

#include <iostream>
using namespace std;

void printPattern(int num) {
    for (int i = 1; i <= num; i++) {
        int value = i;
        for (int j = 1; j <= i; j++) {
            cout << value++;
        }
        cout << endl;
    }
}

int main() {
    int num;
    cout << "Enter number" << endl;
    cin >> num;
    printPattern(num);
    return 0;
}