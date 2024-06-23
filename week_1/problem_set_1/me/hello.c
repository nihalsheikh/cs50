#include <stdio.h>
#include "G:\Courses\CS50 2024\CS50 Library\libcs50-main\src\cs50.c"
#include "G:\Courses\CS50 2024\CS50 Library\libcs50-main\src\cs50.h"

int main(void) 
{
    string name = get_string("What is your name? ");

    printf("Hello, %s \n", name);
}