//
// Created by joan_ on 8.10.2023 г..
// Съставете алгоритъм и напишете програма за преброяване на всички двойки от  съседни елементи, в които двата елемента имат различни знаци
#include "iostream"
# define N 5

using namespace std;

int main() {
    int arr[N], couples = 0;
    for (int i = 0; i < N; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    for (int i = 0; i < N-1; i++) {
        if (arr[i]*arr[i+1] < 0) couples++;
    }
    cout << couples << " couples" << endl;
    return 0;
}