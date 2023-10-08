//
// Created by joan_ on 8.10.2023 г..
// Съставете алгоритъм и напишете програма за намиране на броя на площадките на едномерен масив.
// Площадка наричаме два или повече съседни и еднакви елемента на едномерен масив.
#include "iostream"
#define N 9

using namespace std;

int main () {
    int arr[N], same, sames = 0;
    for (int i = 0; i < N; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    same = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] == same) {
            sames++;
            while(arr[++i] == same);
        }
        same = arr[i];
    }
    cout << "sames = " << sames;
    return 0;
}