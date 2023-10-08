//
// Created by joan_ on 8.10.2023 г..
// Съставете алгоритъм и напиште програма за намиране на сумата на елементите по периметъра на двумерен масив
#include "iostream"
#define N 3
#define M 4

using namespace std;

int main () {
    int arr[N][M], perimeter = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < M; j++) {
        perimeter += arr[0][j] + arr[N-1][j];
    }
    for (int i = 1; i < N-1; i++) {
        perimeter += arr[i][0] + arr[i][M-1];
    }
    cout << "perimeter = " << perimeter;
    return 0;
}