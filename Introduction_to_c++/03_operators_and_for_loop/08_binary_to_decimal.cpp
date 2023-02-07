#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n) {
    int power = 0;
    int decimalNumber = 0;
    while (n > 0) {
        int num = n % 10;
        decimalNumber += num * pow(2, power);
        n /= 10;
        power += 1;
    }
    return decimalNumber;
}


int main() {
    int n;
    cin >> n;
    cout << binaryToDecimal(n) << endl;
    return 0;
}