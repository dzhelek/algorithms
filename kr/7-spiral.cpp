//
// Created by joan_ on 4.11.2023 г..
//
// Даден е двумерен масив А с n2 елемента.
// Да се напише програма, която проверява дали разположените по спирала елементи,
// започвайки от елемента А00 и продължавайки в посока на часовниковата стрелка са членове на трионообразна редица (изпъкнала или вдлъбната).
// Трионобразна редица е редица от елементи, първата част на която е монотоннно растяща, а втората е монотонно намаляваща (изпъкнала) или обратно (вдлъбната).
#include "iostream"

#define N 3

using namespace std;

int main() {
    // state of the series of numbers
    enum {
        NOT_DETERMINED,
        DECREASING,
        INCREASING,
        CONVEX, // decreasing, then increasing
        CONCAVE, // increasing, then decreasing
        OTHER
    } state = NOT_DETERMINED;

    // direction to go in the matrix
    enum direction_t{
        RIGHT,
        DOWN,
        LEFT,
        UP
    } direction = RIGHT;

    int matrix[N][N], i, j, k, n, previous, current;

    // input the matrix
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    // initial conditions
    current = matrix[0][0];
    n = N;
    i = 0;
    j = -1; // we start from non-existent element on the left of the matrix
    while (n) {
        // go n elements to the direction
        for (k = n; k > 0; k--) {
            previous = current;
            switch (direction) {
                case RIGHT:
                    current = matrix[i][++j];
                    break;
                case DOWN:
                    current = matrix[++i][j];
                    break;
                case LEFT:
                    current = matrix[i][--j];
                    break;
                case UP:
                    current = matrix[--i][j];
                    break;
            }
            // observe what is the behaviour of the series (increasing, decreasing, etc.)
            switch (state) {
                case NOT_DETERMINED:
                    if (current > previous) {
                        state = INCREASING;
                    }
                    else if (current < previous) {
                        state = DECREASING;
                    }
                    else {
                        // still not determined
                    }
                    break;
                case INCREASING:
                    if (current < previous) {
                        state = CONCAVE;
                    }
                    else {
                        // still increasing
                    }
                    break;
                case DECREASING:
                    if (current > previous) {
                        state = CONVEX;
                    }
                    else {
                        // still decreasing
                    }
                    break;
                case CONCAVE:
                    if (current > previous) {
                        state = OTHER;
                    }
                    else {
                        // still concave
                    }
                    break;
                case CONVEX:
                    if (current < previous) {
                        state = OTHER;
                        // no break;
                    }
                    else {
                        break; // still convex
                    }
                case OTHER:
                    cout << "NO" << endl;
                    return 0;
            }
        }
        // n is decreased after every right and left move
        if (direction == RIGHT || direction == LEFT) {
            n--;
        }
        // change to next direction in the order they are defined
        direction = (direction_t)(((int)direction+1) % 4);
    }

    if (state == CONVEX || state == CONCAVE) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}