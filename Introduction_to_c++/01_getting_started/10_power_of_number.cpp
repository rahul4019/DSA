#include<bits/stdc++.h>
using namespace std;

int findPower(int x, int n) {
    int result = x;
    for (int i = 1; i < n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << findPower(x, n);
}