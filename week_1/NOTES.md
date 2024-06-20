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

#### Loops

- [x] While loop
- [x] For loop

**While Loop**

Syntax:
```
    while (condition) {
        function;
        update;
    }
```

Example:
```
    #include <stdio.h>

    int main(void) {
        int i = 0;
        while (i < 3) {
            printf("meow\n");
            i++;
        }
    }
```

**For Loop**

Syntax:
```
    for (initialization; expression; update) {
        function
    }
```

Example:
```
    #include <stdio.h>

    int main(void) {
        int i = 0;

        for (i = 0; i < 3; i++) {
            printf("woof\n");
        }
    }
```

### Important Note:
- C lang taken everything literally, The C compiler reads from Top to Down, and will execute the Main Function first.

- It is imp to remember this because if you define another function below main, it may throw an error, as it may not find it in the file.

- To avoid this situation, we make that another function above the Main function, so it knows, that another function exists in the code.

### Mulitiple Functions in Code

Example:
```
    #include <stdio.h>
    #include <cs50.h>

    int add(int a, int b);

    int main(void) {
        int x = get_int("x: ");
        int y = get_int("y: ");

        int z = add(x, y);
        printf("%i \n", z);
    }

    int add (int a, int b) {
        return a + b;
    }
```

- From the above example we can see that, there are 2 functions, namely: **Main** Function and **Add** Function
- Read the Important Note above...
- From the second function:
    ```
        int add (int a, int b) {
        return a + b;
        }
    ```

    - here imp thing to note is that the function is of type `int`, which means that this function will **`return`** an Integer value
    - `(int a, int b)` are the **`arguements/parameters`** provided to the **Add** Function.
    - If instead of `int` it was `void`, then the add function would not return anything