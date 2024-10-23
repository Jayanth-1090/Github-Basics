#include <stdio.h>

void printBinary(int num) {
    // We use 8 * sizeof(int) to account for the total bits in an integer (typically 32 bits).
    for (int i = 8 * sizeof(int) - 1; i >= 0; i--) {
        // Shift the number right by i bits and mask it with 1 to get the bit at position i.
        int bit = (num >> i) & 1;
        printf("%d", bit);
        
        // For readability, print a space after every 4 bits
        if (i % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Binary representation of %d is: ", number);
    printBinary(number);
    
    return 0;
}
