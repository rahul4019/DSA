#include<bits/stdc++.h>
using namespace std;

int nthFibonacci(int n) {
    if (n ==  1) {
        return 1;
    }

    int first = 0, second = 1;

    int num = 1;
    int result = 0;
    while (num < n) {
        result = first + second;
        first = second;
        second = result;
        num++;
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    cout << nthFibonacci(n);
}