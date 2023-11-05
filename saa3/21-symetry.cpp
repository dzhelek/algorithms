//
// Created by joan_ on 5.11.2023 г..
//

// Съставете алгоритъм и напишете програма,
// която намира броя на двойките елементи симетрични на главния диагонал на двумерен масив,
// в които елементът над главния диагонал е по-малък от елементът под главния диагонал.
// Например, следните двойки от елементи са симетрични спрямо главния диагонал:
// а10 и а01; а20 и а02; а21 и а12; а30 и а03 и т.н.

#include "iostream"

#define N 3

using namespace std;

int main() {
    int matrix[N][N], count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
//            cout << matrix[i][j] << " " << matrix[j][i] << endl;
            if (matrix[i][j] < matrix[j][i]) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}