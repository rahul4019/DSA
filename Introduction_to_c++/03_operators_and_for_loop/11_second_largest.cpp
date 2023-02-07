#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int current;
    int count = 0;
    while (count < n) {
        cin >> current;
        if (largest > secondLargest) {
            secondLargest = largest;
        }
        if (current > largest) {
            largest = current;
        }
        count++;
    }
    cout << secondLargest << endl;
}