//
// Created by joan_ on 8.10.2023 г..
// Съставете алгоритъм и напишете програма за намиране на произведението на всички елементи на едномерен масив, участващи в двойки от елементи, чиито суми са не по-големи от 120.
#include "iostream"
#define N 5

using namespace std;

int main() {
    int arr[N], mult_arr[N] = {0}, multiplication = 1;
    for (int i = 0; i < N; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    for (int i = 0; i < N-1; i++) {
        if (arr[i] + arr[i+1] <= 120) {
            if (!mult_arr[i]) {
                mult_arr[i] = 1;
                multiplication *= arr[i];
            }
            if (!mult_arr[i+1]) {
                mult_arr[i+1] = 1;
                multiplication *= arr[i+1];
            }
        }
    }
    cout << "multiplication = " << multiplication;
    return 0;
}