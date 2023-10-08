//
// Created by joan_ on 8.10.2023 г..
// Съставете алгоритъм и напишете програма за размяна на стойностите на две променливи (естествени числа) чрез събиране

#include "iostream"
using namespace std;

int main() {
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
