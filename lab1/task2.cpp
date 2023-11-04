//
// Created by joan_ on 3.11.2023 г..
//
// Даден е едномерен масив, да се намери максималният от най-големите общи делители на всички двойки от елементи на масива

#include "iostream"

# define N 4

using namespace std;

int gcd(int a, int b) {
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int arr[N], max = 0, current;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            cout << arr[i] << " " << arr[j] << endl;
            if ((current = gcd(arr[i], arr[j])) > max) {
                max = current;
                cout << current << " " << endl;
            }
        }
    }

    cout << endl << max << endl;
    return 0;
}