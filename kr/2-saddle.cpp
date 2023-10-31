//
// Created by joan_ on 30.10.2023 г..
//

// 2.Да се състави алгоритъм, който намира броя на седловите точки на даден двумерен масив.
// Седлова точка на двумерен масив е такъв елемент, който едновременно е минимален за стълба и максимален за реда, в който се намира или обратно.
// Освен това за да бъде точката седлова, то в съответния ред или стълб не трябва да има друг елемент със същия екстремум.

#include "iostream"

#define N 4
#define M 5

using namespace std;

int main() {
    int matrix[N][M], maxima[N] = {0}, minima[N] = {0}, counter = 0;
    bool max_is_repeated = false, min_is_repeated = false;
    bool check_max = false, check_min = false;
    bool max_is_saddle, min_is_saddle;

    // input the matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
//            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    // find index of the extrema of each row
    for(int i = 0; i < N; i++) {
        for(int j = 1; j < M; j++) {
            if (matrix[i][j] > matrix[i][maxima[i]]) {
                maxima[i] = j;
                max_is_repeated = false;
            }
            else if (matrix[i][j] == matrix[i][maxima[i]]) {
                max_is_repeated = true;
            }
            if (matrix[i][j] < matrix[i][minima[i]]) {
                minima[i] = j;
                min_is_repeated = false;
            }
            else if (matrix[i][j] == matrix[i][minima[i]]) {
                min_is_repeated = true;
            }
        }
        if (max_is_repeated) {
            maxima[i] = -1;
        }
        if (min_is_repeated) {
            minima[i] = -1;
        }
    }

    // check if row maxima are column minima and vice verse
    for(int k = 0; k < N; k++) {
        check_max = check_min = true;
        max_is_saddle = min_is_saddle = false;
        if (maxima[k] == -1) {
            check_max = false;
        }
        else {
            max_is_saddle = true;
        }
        if (minima[k] == -1) {
            check_min = false;
        }
        else {
            min_is_saddle = true;
        }
        for(int i = 0; i < N; i++) {
            if (i == k) {
                continue;
            }
            // check if row maximum is column minimum
            if (check_max && matrix[i][maxima[k]] <= matrix[k][maxima[k]]) {
                max_is_saddle = false;
                check_max = false;
            }
            // check if row minimum is column maximum
            if (check_min && matrix[i][minima[k]] >= matrix[k][minima[k]]) {
                min_is_saddle = false;
                check_min = false;
            }
        }
        if (max_is_saddle) {
            counter++;
        }
        if (min_is_saddle) {
            counter++;
        }
        if (counter == 2) {
            break;
        }
    }

    // output number of saddle points
    cout << counter;

    return 0;
}