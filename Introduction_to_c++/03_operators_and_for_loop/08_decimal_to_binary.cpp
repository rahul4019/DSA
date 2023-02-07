#include <iostream>
using namespace std;

void decimalToBinary(int& n) {
    int result = 0;
    int value = 1;
    while (n > 0) {
        int rem = n % 2;
        result = result + (rem * value);
        value *= 10;
        n /= 2;
    }
    cout << result << endl;
}


int main() {
    int n;
    cin >> n;
    decimalToBinary(n);
    return 0;
}