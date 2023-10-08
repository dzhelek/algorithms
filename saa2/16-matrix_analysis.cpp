//
// Created by joan_ on 8.10.2023 г..
// Въведете елементите на двумерен масив. Създайте едномерен масив с елементи, елементите на двумерния масив, както следва:
// сумата на елементите по главния диагонал,
// сумите на елементите по редове
// и броя на елементите под главния диагонал, по-малки от сумите на индексите им.
#include "iostream"
#define N 3
#define M 5

using namespace std;

int main() {
    int matrix[N][M], arr[N+2] = {0}, index = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    /*
    for (int i = 0; i < N && i < M; i++) {
        arr[index] += matrix[i][i];
    } */
    for (int i = 0; i < N; i++) {
        index++;
        for (int j = 0; j < M; j++) {
            arr[index] += matrix[i][j];
            if (i > j && matrix[i][j] < i+j) arr[N+1]++;
            if (i == j) arr[0] += matrix[i][j];
        }
    }

    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}