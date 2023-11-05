//
// Created by joan_ on 5.11.2023 г..
//
#include "iostream"

using namespace std;

float power(float x, int n) {
    if (n == 0) {
        return 1;
    }

    if (n > 0) {
        return x * power(x, n-1);
    }

    // n < 0
    return 1 / power(x, -n);
}

int main() {
    float x;
    int n;

    cin >> x;
    cin >> n;
    cout << power(x, n);

    return 0;
}