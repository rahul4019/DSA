#include<bits/stdc++.h>
using namespace std;

void pyramidNumberPattern(int n) {
    for (int i = 1; i <= n; i++) {
        int val1 = i;
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << val1;
            val1--;
        }
        int val2 = 2;
        for (int j = 1; j <= i - 1; j++) {
            cout << val2;
            val2++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pyramidNumberPattern(n);
    return 0;
}