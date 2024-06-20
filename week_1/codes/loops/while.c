#include <stdio.h>

int main(void) {
    int i = 3;

    while (i > 0) {
        printf("meow\n");

        i --;
        // above line can be written as:
        // i = i - 1; 
    }
}