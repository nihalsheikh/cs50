#include "G:\Courses\CS50 2024\CS50 Library\libcs50-main\src\cs50.c"
#include "G:\Courses\CS50 2024\CS50 Library\libcs50-main\src\cs50.h"
#include <stdio.h>

void print_wall(int bricks);

int main(void) {
    int n;
    do
    {
        n = get_int("Enter Height: ");
    }
    while (n < 1 || n > 8)

    print_wall(n);
}

void print_wall(int bricks) {
    for (int i = 0; i < bricks; i++) {
        for (int j = i; j < bricks; j++) {
            for (int k = )
        }
    }
}