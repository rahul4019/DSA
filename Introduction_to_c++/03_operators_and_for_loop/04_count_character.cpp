#include <iostream>
using namespace std;

int main() {
    char ch;
    int charCount = 0;
    int spaceCount = 0;
    int digitCount = 0;

    ch = cin.get();
    while (ch != '$') {
        if (ch >= 97 && ch <= 122) {
            charCount++;
        }
        else if (ch >= 48 && ch <= 57) {
            digitCount++;
        }
        else {
            spaceCount++;
        }
        ch = cin.get();
    }
    cout << charCount << " " << digitCount << " " << spaceCount << endl;
}