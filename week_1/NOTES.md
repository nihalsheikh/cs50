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

#### Data Types and Variables

Multiple data types used in the C programming.
Data Types table:

| Data Type | Written as | 
| --- | --- |
| Integer | int |
| String | string |


**`int`:** 
    - used to **store integer values** like (-2,-1,0,1,2,3...)
    - takes **memory space** of **4 bytes** or **32 bits**.
    - Range of values it can store is limited to 32 bits worth info.
    - The value **ranges from -2<sup>31</sup>** to **2<sup>31</sup>-1**

**`unsigned`:**
    - its not a separate datatype but a _**qualifier**_
    - it **modifies the data type** of int slighlty
    - you can use unsigned with other data types too, int is not the only one.
    - it doubles the positive range of values that an integer can take on at the expense of no longer allowing you to take negative values.

**`char`:**
    - char stands for Character
    - this data type **stores single character**.
    - takes **memory space** of **1 byte** or **8 bits**.
    - the value **ranges from -128 to 127** or **-2<sup>7</sup> to 2<sup>7</sup>-1**

**`float`:**
    - this data type **stores Real Numbers**.
    - type takes **memory space** of **4 bytes** or **32 bits**
    - little hard to describe its range
    - floats have a precision problem regarding the decimal part.

**`double`:**
    - Also used to **stores Real Number**.
    - they have double precision than float
    - takes **memory space** of **8 bytes** or **64 bits**
    - when to use: when you are working on very long decimal number and have to be precise with the decimals then use double

**`void`:**
    - this is not a data type, but it is a _`type`_
    - Functions can have a void return type, it means that the **Function does not return values**.
    - Parameter list of function can also be void, it means **function takes no parameters**.
    - For example: `printf` is a void function, it return nothing or stores it.
    - Params example: `int main(void)`, main function takes no parameters.


following data types are created by CS50, so use `<cs50.h>` header file while coding.

**`bool`:** 
    - stores Boolean values
    - true or false, 0 and 1, yes or no

**`string`:** 
    - these are words or collection of characters
    - multiple char, text value

**`structs`:**
    - used for grouping two data types together

**`typedefs`:**
    - defined data types

**Variables**

- To declare a vairable you need only 2 things:
    - type
    - name

- For example: 
    - `int number;`
    - `char letter;`

- If you want to create multiple variable of same type, then
    - specify the name ones
    - list as many varibales of that type as you want
    - for example:
        - `int height, width, num;`
        - `float sqrt1, sqrt3, pi;`

- Only declare variables when you need them.

- Using variables:
    - Declare the variables, then use it wherever you want.
        - for example: way1
        ```
            int number;     // declaration
            number = 17;    // assignment

            char letter;    // declaration
            letter = 'a';   // assignment
        ```

        - for example: way2
        ```
            int number = 12;       // initialization
            char letter = 'N';  // initialization
        ```


#### Operators
#### Conditional Statements
#### Command Line
#### Magic Numbers



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