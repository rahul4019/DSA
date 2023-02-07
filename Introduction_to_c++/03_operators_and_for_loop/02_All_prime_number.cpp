#include <iostream>
using namespace std;

void printPrimeNums(int n) {
    for (int i = 2; i <= n; i++) {
        int num = 2;
        bool isPrime = true;
        while (num < i) {
            if (i % num == 0) {
                isPrime = false;
            }
            num++;
        }
        if (isPrime) {
            cout << i << endl;
        }
    }
    return;
}


int main() {
    int n;
    cin >> n;
    printPrimeNums(n);
    return 0;
}