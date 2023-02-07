#include<bits/stdc++.h>
using namespace std;

bool checkFibo(int n) {
    if (n == 0) {
        return true;
    }
    bool isFibonacci = false;
    int first = 0;
    int second = 1;
    int fibNum = first + second;
    while (fibNum <= n) {
        if (fibNum == n) {
            return true;
        }
        first = second;
        second = fibNum;
        fibNum = first + second;
    }
    return isFibonacci;
}


int main() {
    int n;
    cin >> n;
    if (checkFibo(n)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}