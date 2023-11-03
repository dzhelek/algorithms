//
// Created by joan_ on 3.11.2023 г..
//
// Даден е двумерен масив. Да се генерира едномерен масив със следните елементи:
// 1 - броят на елементите, по-малки от сумата на двата им индекса и намиращи се под главния диагонал;
// 2 - средноаритметичната стойност на елементите по вторичния диагонал на двумерния масив;
// останалите елементи са сумите на елементите по редовете на двумерния масив
#include "iostream"

#define N 3

using namespace std;

int main() {
    float matrix[N][N];
    float arr[N + 2] = {0};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i > j && matrix[i][j] < i + j) {
                arr[0]++;
            }
            if (i + j == N - 1) {
                arr[1] += matrix[i][j];
            }
            arr[i + 2] += matrix[i][j];
        }
    }
    arr[1] /= N;

    for (int i: arr) {
        cout << i << endl;
    }
    return 0;
}