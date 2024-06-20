#include <stdio.h>

/*
C lang taken everything literally, The C compiler reads from
Top to Down, and will execute the Main Function first.

It is imp to remember this because if you define another
function below main, it may throw an error, as it may not find
it in the file.

To avoid this situation, we make that another function above
the Main function, so it knows, that another function
exists in the code.
*/

void woof(int n);

int main(void) {
    woof(4);
}

void woof(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("woof\n");
    }
}