#include <stdio.h>

void woof(int n);

int main(void) {
    woof(4);
}

void woof(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("woof\n");
    }
}