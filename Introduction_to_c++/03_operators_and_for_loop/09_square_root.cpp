#include<iostream>
using namespace std;

int squareRoot(int& n) {
    int ans = 0;
    while ( ans * ans <= n){
        ans++;
    }
    return ans-1;
}

int main() {
    int n;
    cin >> n;
    cout << squareRoot(n);
    return 0;
}