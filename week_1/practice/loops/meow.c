#include <stdio.h>

int main(void) {
    // remember the value of i, it should be less when declaring int i than in the while loop
    // best practise is to write value from 0, in this case int i should be equal to 0
    // remeber, that when starting value is 0, then loop is either '>' or '<' than, never include '=' sign

    int i = 0;
    while (i < 3) {
        printf("meow\n");
        i++;
    }
}