#include <stdio.h>
void swap_using_XOR(int a, int b)
{
    printf("Before swapping using XOR : a = %d, b = %d\n", a, b);

    // Swapping using XOR
    a = a ^ b;  // a now holds a ^ b
    b = a ^ b;  // b is now (a ^ b) ^ b = a
    a = a ^ b;  // a is now (a ^ b) ^ a = b

    printf("After swapping using XOR : a = %d, b = %d\n", a, b);
}

void swap_using_temp(int a, int b)
{
    printf("Before swapping using temp: a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping using temp: a = %d, b = %d\n", a, b);
}
int main() {
    int a = 5, b = 10;

    swap_using_XOR(a,b);
    swap_using_temp(a,b);
    return 0;
}
