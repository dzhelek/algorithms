//
// Created by joan_ on 8.10.2023 г..
// Съставете алгоритъм и напишете програма за намиране на сумата на елементите по вторичния диагонал на двумерен масив.
#include "iostream"
#define N 5
#define M 3

using namespace std;

int main() {
    int matrix[N][M], sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < N && M-1-i >= 0; i++) {
        sum += matrix[i][M-1-i];
    }
    cout << "sum = " << sum;
    return 0;
}