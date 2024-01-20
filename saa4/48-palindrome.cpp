//
// Created by joan_ on 20.1.2024 г..
//

// Съставете алгоритъм и напишете програма, проверяваща за симетричност даден низ, въведен чрез главната функция.
// Другото наименование на симетричен низ е палиндром.

#include "iostream"
using namespace std;

int main() {
    char string[50];
    bool palindrome = true;

    cin >> string;

    char* end = string;
    char* start = string;
    while(*++end);
    end--;

    do {
        if (*start != *end) {
            palindrome = false;
            break;
        }
    } while (start++ <= end--);

    cout << palindrome;

    return 0;
}
