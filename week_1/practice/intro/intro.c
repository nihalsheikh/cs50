#include <stdio.h>
#include <cs50.h>
// cs50.h is a special header file used in CS50 classes.

int main(void) {
    string name = get_string("What's your name? ");
    printf("Hello, %s \n", name);
}