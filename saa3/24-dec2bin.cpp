//
// Created by joan_ on 5.11.2023 г..
//
// Съставете алгоритъм и напишете програма за преобразуване на цяло десетично положително число в двоично чрез рекурсивна функция.

#include "iostream"

using namespace std;

int dec2bin (int dec) {
    if (dec == 1) {
        return 1;
    }
    return dec % 2 + 10 * dec2bin(dec / 2);
}

int main() {
    int n;

    cin >> n;
    cout << dec2bin(n);

    return 0;
}