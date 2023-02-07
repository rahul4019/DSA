// --*
// -***
// *****
// -***
// --*


#include <iostream>
using namespace std;

void printPattern(int num) {
    // upper part
    int upperNoOfLines = (num / 2) + 1;
    for (int i = 1; i <= upperNoOfLines; i++) {
        // prints spaces
        for (int j = 1; j <= upperNoOfLines - i; j++) {
            cout << " ";
        }
        // prints stars
        for (int j = 1; j <= (i * 2) - 1; j++) {
            cout << '*';
        }
        cout << endl;
    }
    // bottom part    
    int bottomNoOfLines = (num / 2);
    for (int i = 1; i <= bottomNoOfLines; i++) {
        // prints spaces
        for (int j = 1; j <= i; j++) {
            cout << ' ';
        }
        // prints stars
        // TODO : fix stars count
        for (int j = (2 * (bottomNoOfLines)) - i; j >= 1; j--) {
            cout << '*';
        }
        cout << endl;
    }
}

int main() {
    int num;
    cin >> num;

    printPattern(num);

    return 0;
}