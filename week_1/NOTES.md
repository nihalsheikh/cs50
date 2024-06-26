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

**Arithmetic Operators**
    - **`+`:** Addition
    - **`-`:** Subtraction
    - **`*`:** Multiplication
    - **`/`:** Division
    - **`%`:** Modulus: for storing the remainder value after division.

- Example: usage of basic arithmetic operators
    ```
        int x = y + 1;
        x = x * 5;
    ```

- Example of Modulus operator
    ```
        int m = 13 % 4;
        // after executing the above line, m becomes 1, how?? 13/4 gives remainder 1
    ```

- Few shortcuts of using the Arithmetic operators:
    - Addition:
        - `x = x + 1;` can be written as `x++;` or `x += 1;`
        - `x = x - 1;` can be written as `x--;` or `x -= 1;`
        - `x = x * 5;` can be written as `x *= 5;`
        - `x = x / 5;` can be written as `x /= 5;`


**Boolean Operators**
- Used for comparing values
- Has only two possible values: `true` or `false`
- used in conditional statements, like if something is true do this, or if it is false do that.
- When working with Booleans expressions, we use variable of type bool
- In C, every non-zero value is **`true`**, and zero is **`false`**
- Types of Boolean expression:
    - Logical Operators.
    - Relational Operators. 

    **Logical Operators**
    - **`Logical AND (&&)`:**
        - It is **true** if and only if **both operands are true**, otherwise false

        | x | y | (x && y) |
        | --- | --- | --- |
        | true | true | **true** |
        | true | false | false |
        | false | true | false |
        | false | false | false | <br>

    -  **`Logical OR (||)`:**
        - It is **true** if and only if **at least one operand is true**, otherwise false

        | x | y | (x && y) |
        | --- | --- | --- |
        | true | true | **true** |
        | true | false | **true** |
        | false | true | **true** |
        | false | false | false | <br>

    - **`Logical NOT (!)`:**
        - It **inverts** the value of its operand
        - the symbol `!` can be called as `bang`, `not` or `exclamation`

        | x | !x |
        | -- | -- |
        | true | false |
        | false | true | <br>


    **Relational Operators**
        - **`Less than (<)`:**  
            -> usage: (x < y); <br>
        - **`Less than or equal to (<=)`:**
            -> usage: (x <= y)<br>
        - **`Greater than (>)`:**
            -> usage: (x > y)<br>
        - **`Greater than or equal to (>=)`:**
            -> usage: (x >= y)<br>
        **Testing for Equality**
        - **`Equality: (x == y)`**
        - **`Inequality: (x != y)`**

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