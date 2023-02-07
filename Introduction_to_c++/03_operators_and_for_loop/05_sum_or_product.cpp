#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int product(int n) {
    int product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    return product;
}

int main() {
    int n, c;
    cin >> n >> c;

    if (c == 1) {
        cout << sum(n) << endl;
    }
    else if (c == 2) {
        cout << product(n) << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}