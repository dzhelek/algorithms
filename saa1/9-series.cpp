//
// Created by joan_ on 8.10.2023 г..
// Съставете алгоритъм и напишете програма за изчисляване на първото xn > 100 за рекурентната редица xn+1 = 2xn + 10, n = 0,1,…, x0 = 2

#include "iostream"
using namespace std;

int main() {
    int x = 2;
    while (x <= 100) {
        x = 2*x + 10;
    }
    cout << x << endl;
}
