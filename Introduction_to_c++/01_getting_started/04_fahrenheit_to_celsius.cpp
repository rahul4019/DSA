#include<bits/stdc++.h>
using namespace std;

void fahrenheitToCelsius(int start, int end, int stepSize) {
    while (start <= end) {
        cout << start << "  " << (start - 32) * 5 / 9 << endl;
        start += stepSize;
    }
    return;
}

int main() {
    int start, end, stepSize;
    cout << "Enter start, end and stepSize" << endl;
    cin >> start >> end >> stepSize;
    fahrenheitToCelsius(start, end, stepSize);
    return 0;
}