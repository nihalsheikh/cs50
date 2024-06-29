#include <cs50.h>
#include <stdio.h>

void right_pyramid(int height);

int main(void)
{
    // User Input
    int h = get_int("Enter Height: ");

    // Display user input
    printf("Wall of height: %i\n", h);

    // print right_pyramid
    for (int i = 0; i < h; i++)
    {
        right_pyramid(i + 1);
    }
}

void right_pyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#");
    }
    printf("\n");
}
