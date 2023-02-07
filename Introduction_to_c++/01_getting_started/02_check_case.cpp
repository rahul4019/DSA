#include<iostream>
using namespace std;

int checkCase(char alphabet) {
    if (alphabet >= 65 && alphabet <= 90) {
        return 1;
    }
    else if (alphabet >= 97 && alphabet <= 122) {
        return 0;
    }
    else {
        return -1;
    }
}

int main() {
    char alphabet;
    cout << "Enter alphabet" << endl;
    cin >> alphabet;
    cout << checkCase(alphabet) << endl;
}