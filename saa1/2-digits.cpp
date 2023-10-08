//
// Created by joan_ on 8.10.2023 г..
//
//Съставете алгоритъм и напишете програма за намиране на сумата на цифрите на естествено трицифрено число
#include "iostream"
using namespace std;

int main() {
    int n, s;

    cout << "n = ";
    cin >> n;
    s = n/100 + n%100/10 + n%100%10;
    cout << "s = " << s;
}