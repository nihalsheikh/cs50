# Week 1

### C programming

- [x] Header Files
- [x] Main Function

#### Header Files

- usually starts with `#include`, and these are written/placed on the top of the code
- For example:
    ```
        #include <stdio.h>

        int main(void) {
            printf("Hello, World!);
        }
    ```

    - Here `#include <stdio.h>` is the **header file** or a **library**
    - There are various types of libraries used in C Programming.
    - More libraries can be found here: [C Libraries](manual.cs50.io)
    - Header Files are pre-determined functions, that gets executed when called, like in the earlier example, `<stdio.h>` is for `Standard Input and Output`, it taken a pre-determined input in `printf function` and then prints it out in the terminal when executing the file.
    - As you can see, from example, **`Hello World`** is printed in the terminal.

#### Data Types

Multiple data types used in the C programming.
Following are the types:

- [x] String: string
- [x] Int: int
- [x] Boolean: bool
- [x] Char: char
- [x] Float: float
- [x] Long: long

string: multiple char, text value
int: integers
bool: true or false values
char: exactly one character
float: decimal numbers
long: big numbers with decimal