#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first_name = get_string("Enter your first name: ");
    string last_name = get_string("Enter your last name: ");
    int age = get_int("Enter your age: ");
    int phone = get_int("Enter your phone number: ");

    printf("Contact Details\n");
    printf("%s %s\n %i\n %i\n", first_name, last_name, age, phone);
}