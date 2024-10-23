#include <stdio.h>

int toggleNthBit(int num, int n) {
    // Create a mask by shifting 1 to the nth position
    int mask = 1 << n;
    // Toggle the nth bit using XOR
    return num ^ mask;
}

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to toggle (0-based): ");
    scanf("%d", &n);

    int result = toggleNthBit(num, n);

    printf("Number after toggling the %dth bit: %d\n", n, result);

    return 0;
}
