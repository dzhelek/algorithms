//
// Created by joan_ on 20.1.2024 г..
//
// Съставете алгоритъм и напишете програма за търсене на елемент в предварително подреден едномерен масив с неповтарящи се елементи.
// По зададена стойност, програмата да извежда индекса на елемента. Да се използва метода Разделай и Владей.

#include "iostream"
using namespace std;

int main() {
    int array[] = {1, 2, 8, 15, 27, 34};
    int n = 6;
    int element;

    cin >> element;

    int* search = array;
    bool found = false;
    int result = 0;
    n--;
    while (n) {
        n /= 2;
        if (search[n] == element) {
            result += n;
            found = true;
            break;
        }
        if (search[n] < element) {
            search += n+1;
            result += n+1;
        }
    }

    if (found )
        cout << result;
    else
        cout << "not found";

    return 1;
}