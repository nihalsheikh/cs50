#include <cs50.h>
#include <stdio.h>

// Function declarations
int quarters(int cents);
int dimes(int cents);
int nickels(int cents);
int pennies(int cents);

int main(void)
{
    int cents;

    // User input for a positive integer
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate the minimum number of coins
    int coins = 0;

    // Calculate the number of quarters
    coins += quarters(cents);
    cents %= 25;

    // Calculate the number of dimes
    coins += dimes(cents);
    cents %= 10;

    // Calculate the number of nickels
    coins += nickels(cents);
    cents %= 5;

    // Calculate the number of pennies
    coins += pennies(cents);

    // Print the result
    printf("%d\n", coins);

    return 0;
}

// Function definitions
int quarters(int cents)
{
    return cents / 25;
}

int dimes(int cents)
{
    return cents / 10;
}

int nickels(int cents)
{
    return cents / 5;
}

int pennies(int cents)
{
    return cents;
}
