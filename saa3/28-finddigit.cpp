//
// Created by joan_ on 5.11.2023 г..
//
//Съставете алгоритъм и напишете програма, която проверява за наличие на дадена цифра в дадено естествено число чрез рекурсивна функция.
#include "iostream"

using namespace std;

bool find(int n, int d) {
    if (n == 0) {
        return false;
    }

    if (n % 10 == d) {
        return true;
    }

    return find(n / 10, d);
}

int main() {
    int number, digit;

    cin >> number;
    cin >> digit;
    cout << find(number, digit);

    return 0;
}