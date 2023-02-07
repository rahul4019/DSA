#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int prev, current;
    cin >> prev;
    int count = 1;

    bool isInc = false;
    bool isDec = false;

    while (count < n) {
        cin >> current;

        if (prev == current) {
            cout << "false" << endl;
            return 0;
        }
        else if (prev < current) {
            isInc = true;
        }
        else {
            if (isDec == false) {
                isDec = true;
            }
            else if (isInc) {
                cout << "false" << endl;
                return 0;
            }
        }

        prev = current;
        count++;
    }

    cout << "Input taken: " << count << endl;
    cout << "true" << endl;
    return 0;
}