#include<bits/stdc++.h>
using namespace std;

void numberStarPattern(int n) {
    for (int i = 1; i <= n; i++) {
        int val1 = 1;
        for (int j = 1; j <= n - i + 1; j++) {
            cout << val1;
            val1++;
        }

        for (int j = 1; j <= (i - 1) * 2; j++) {
            cout << "*";
        }

        int val2 = n - i + 1;
        for (int j = 1; j <= n - i + 1; j++) {
            cout << val2;
            val2--;
        }

        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    numberStarPattern(n);
    return 0;
}