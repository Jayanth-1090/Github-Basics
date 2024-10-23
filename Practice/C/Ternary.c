#include <stdio.h>

int main() {
    int a = 10, b = 20;
    // Using the conditional operator to find the maximum of two numbers
    int max = (a > b) ? a : b;

/*  How it actually works for understanding
    if (a > b) 
    {
        max = a;
    } else {
        max = b;
    }
*/

    printf("The maximum is: %d\n", max);

    return 0;
}
