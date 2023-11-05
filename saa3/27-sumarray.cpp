//
// Created by joan_ on 5.11.2023 г..
//
//Съставете алгоритъм и напишете програма за изчисляване на сумата на елементите на даден едномерен масив чрез рекурсивна функция.
#include "iostream"

#define N 5

using namespace std;

int sum (int* array, int n) {
    if (n == 0) {
        return 0;
    }
    return *array + sum(array+1, n-1);
}

int main() {
    int array[N];

    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    cout << sum(array, N);
    return 0;
}