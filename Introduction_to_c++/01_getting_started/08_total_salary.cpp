#include <iostream>
#include <cmath>
using namespace std;

int totalSalary(int basic, char grade) {
    // total salary = basic + hra + da + allow - pf

    float hra = basic * 0.20;
    float da = basic * 0.50;
    float pf = basic * 0.11;

    if (grade == 65) {
        return round(basic + hra + da + 1700 - pf);
    }
    else if (grade == 66) {
        return round(basic + hra + da + 1500 - pf);
    }
    else {
        return round(basic + hra + da + 1300 - pf);
    }

}

int main() {
    int basicSalary;
    char grade;

    cin >> basicSalary >> grade;

    cout << totalSalary(basicSalary, grade);
    return 0;
}