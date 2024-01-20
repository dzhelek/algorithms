//
// Created by joan_ on 20.1.2024 г..
//

// Съставете алгоритъм и напишете програма за определяне честотата на срещане на елементите на двумерен масив.
// Елементите на масива да бъдат естествени едноцифрени числа.

# include "iostream"
using namespace std;

int main() {
    int matrix[5][6] = {
            3, 2, 5, 7, 8, 1,
            1, 2, 1, 5, 7, 9,
            2, 2, 3, 5, 6, 8,
            1, 3, 2, 1, 5, 6,
            7, 2, 3, 5, 5, 9
    };

    int frequencies[10] = {0};

    for (int i = 0; i < 5*6; i++) {
        frequencies[((int *)matrix)[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << frequencies[i] << " ";
    }
    return 0;
}