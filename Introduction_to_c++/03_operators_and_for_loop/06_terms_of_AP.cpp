#include<bits/stdc++.h>
using namespace std;

void termsOfAP(int n){
    int count = 1; 
    int val = 1; 
    while(count <= n) {
        int num = (val* 3)+2;
        if(num % 4 != 0) {
            cout << num << endl;
            count++;
        }
        val++;
    }
}

int main(){
    int n; 
    cin>> n;
    termsOfAP(n);
    return 0;
}