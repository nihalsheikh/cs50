#include <stdio.h>

int main(void) {
    // remember the value of i, it should be less when declaring int i than in the while loop
    int i = 1;
    while (i <= 3) {
        printf("meow\n");
        i++;
    }
}