#include<bits/stdc++.h>
using namespace std;

int reverse(int n) {
    int result = 0;
    while (n > 0) {
        int num = n % 10;
        result = (result * 10) + num;
        n /= 10;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << reverse(n) << endl;
    return 0;
}