//
// Created by joan_ on 20.1.2024 г..
//

// Съставете алгоритъм и напишете програма за плащане с най-малък брой монети чрез алчен алгоритъм (рекурсивен вариант).

#include "iostream"

using namespace std;

const int n = 6;
int coins[n] = {50,20,10,5,2,1};

void calculate_coins(int total, int i) {
    if (i == n) return;

    cout << total / coins[i] << "x " << coins[i] << endl;
    calculate_coins(total % coins[i], i+1);
}

int main () {
    int total;

    cout << "enter total: " << endl;
    cin >> total;

    calculate_coins(total, 0);

    return 0;
}