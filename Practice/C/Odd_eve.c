#include <stdio.h>
void check_using_modulus(int num)
{
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}

void check_using_bitwise(int num)
{
    if (num & 1)
        printf("%d is odd.\n", num);
    else
        printf("%d is even.\n", num);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check_using_bitwise(num);
    check_using_modulus(num);

    return 0;
}
