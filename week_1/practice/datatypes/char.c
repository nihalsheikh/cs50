#include <stdio.h>
#include <cs50.h>
// cs50 is a special header file used in CS50 classes

int main(void) {
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y') {
        printf("I agree\n");
    }
    else if (c == 'n' || c == 'N') {
        printf("I don't agree\n");
    }
}