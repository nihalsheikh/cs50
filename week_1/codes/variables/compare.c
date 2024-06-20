#include <stdio.h>
#include <cs50.h>
// cs50.h is a special header file used in CS50 classes.

int main(void) {
    int x = get_int("x is: ");
    int y = get_int("y is: ");

    if (x > y) {
        printf("x is greater than y\n");
    }
    else if (x < y) {
        printf("x is less than y\n");
    }
    else {
        printf("x is equal to y\n");
    }
}