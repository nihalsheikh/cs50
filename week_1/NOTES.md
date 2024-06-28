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

**Conditionals**
- Conditional expression allow your programs to make decisions and take different forks in the road, depending on the values of variables or user input.

- C has different ways to express the conditional expressions, which we will call as Conditional branch.

- Conditional Expressions Syntax :
    1. **`if`**
        ```
            if (boolean expression) 
            {
                // code
            }
        ```
        - when the boolean expression is **true**, the code will be executed in order of top-to-bottom
        - when the boolean-expression is **false**, the code will not be executed
    
    2. **`if else`**
        ```
            if (boolean expression) 
            {
                // code
            }
            else
            {
                // code
            }
        ```
        - when the boolean expression is **true**, the code in the `if block` will be executed in order of top-to-bottom.
        - when the boolean-expression is **false**, the code in the `else block` will be executed in order of top-to-bottom.
    
    3. **`else if`**
        ```
            if (boolean expression) 
            {
                // code branch: 1
            }
            else if (boolean expression 2)
            {
                // code branch: 2
            }
            else if (boolean expression 3)
            {
                // code branch: 3
            }
            else
            {
                // code branch: 4
            }
        ```
        - when the boolean expression is **true or satisfies the condition**, then code in the `if block` will be executed in order of top-to-bottom.
        - when the boolean-expression in if block is not satisfied, it is checked in the else if block, if it satisfies the condtion, then code in the `else if block` will be executed in order of top-to-bottom.
        - when the condition of both if and else if block are not satisfied, then code in the else block is executed.

    4. **`if if if else`**
        ```
            if (boolean-expresion 1)
            {
                // code branch: 1
            }
            if (boolean-expresion 2)
            {
                // code branch: 2
            }
            if (boolean-expresion 3)
            {
                // code branch: 3
            }
            else
            {
                // code branch: 4
            }
        ```
        - it is possible to create a chain of non-mutually exclusive branches.
        - 1st and 2nd branches are non-multually exclusive
        - Only 3rd and 4th branches are mutually exclusive.
        - The **else binds to the nearest if** only.

    5. **`Switch Case`**
        ```
            int x = get_int();  // get_int is provided by the special <cs50.h> file
            switch(x)
            {
                case 1:
                    printf("One!\n");
                    break;
                case 2:
                    printf("Two!\n");
                    break;
                case 3:
                    printf("Three!\n");
                    break;
                default:
                    printf("No Number!\n");
            }
        ```
        - `switch()` statement is a conditional statement that permits enumeration of discrete cases, instead of relying on Boolean Expresions.
        - it is imp to `break;` between each case, or you will "fal through" each case (unless that is desired behaviour) 

    6. **`? :`** or **`Ternary Operator`**
        ```
            // main ? : syntax
            int x = (expression) ? 5 : 6;

            // Alternate version of the above code
            int x;
            if (expression)
            {
                x = 5;
            }
            else
            {
                x = 6;
            }
        ```
        - understanding the above line:
            int x = (expression) ? `<for true>` : `<for false>`

            - Example:
                `int x = (expression) ? 5 : 6;`

            when the condition of expression is true, then execute the true thing, or execute the false, in this case when the boolean condition is satisfied or it is true x becomes 5 else it will be 6


#### Loops
- [x] While loop
- [x] For loop

**`while true`**
    ```
        while (true)
        {
            // code
        }
    ```
    - This is called an infinite loop.
    - The lines between the curly braces will be executed repeatedly from top-to-bottom until and unless we break out of it.

**`while Loop`**
- Syntax:
    ```
        while (boolean expression) {
            function;
            update;
        }
    ```

- Example:
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
    - when the expression is true, the code wil be executed repeatedly until the expression becomes false.
    - in while loop the true condition will be executed repeatedly till it becomes false.

**`do while`**
    ```
        do
        {
            // code
        }
        while (boolean expession);
    ```
    - This code will be executed once, and then it will check the boolean expression
    - If the boolean expression is true, it will repeat the process till it becomes false
    - Guranteed to run atleast one time.

**`for Loop`**
- Syntax:
    ```
        for (initialization; bool-expression; update) {
            function
        }
    ```

- Example:
    ```
        #include <stdio.h>

        int main(void) {
            int i = 0;

            for (i = 0; i < 3; i++) {
                printf("woof\n");
            }
        }
    ```
    - In the above example:
        - `int i` is the counter variable
        - The boolean codition is checked:
            - if it is **true**: the body is executed
            - if it is **false**: the body does not execute
        - The **counter variable** `i++` is incremented and then the Boolean expression is checked again.

**Use Cases for loop**
- `while`:
    - use when you want to loop to repeat for an unknown number of times and possibly not at all.

- `do while`:
    - use when you want to loop to for repeat an unknown number of times but at least for once

- `for`:
    - use when you want to loop to repeat a discrete number of times while you may not know the number at the moment the program is compiled.




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