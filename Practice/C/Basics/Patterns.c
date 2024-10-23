#include <stdio.h>

// Function prototypes
void right_angled_triangle(int n);
void inverted_right_angled_triangle(int n);
void pyramid_star(int n);
void diamond_star(int n);
void floyds_triangle(int n);
void number_pyramid(int n);
void hollow_square(int n);
void hollow_right_angled_triangle(int n);
void zigzag_pattern(int n);
void pascals_triangle(int n);

int main() {
    int n = 5; // You can change this value for different sizes

    printf("Right-Angled Triangle Star Pattern:\n");
    right_angled_triangle(n);
    printf("\nInverted Right-Angled Triangle Star Pattern:\n");
    inverted_right_angled_triangle(n);
    printf("\nPyramid Star Pattern:\n");
    pyramid_star(n);
    printf("\nDiamond Star Pattern:\n");
    diamond_star(n);
    printf("\nFloyd's Triangle:\n");
    floyds_triangle(n);
    printf("\nNumber Pyramid:\n");
    number_pyramid(n);
    printf("\nHollow Square Star Pattern:\n");
    hollow_square(n);
    printf("\nHollow Right-Angled Triangle Star Pattern:\n");
    hollow_right_angled_triangle(n);
    // printf("\nZigzag Pattern:\n");
    // zigzag_pattern(n);
    printf("\nPascal's Triangle:\n");
    pascals_triangle(n);

    return 0;
}

void right_angled_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void inverted_right_angled_triangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pyramid_star(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j > 1; j--) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void diamond_star(int n) {
    pyramid_star(n);
    for (int i = n - 1; i > 0; i--) {
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void floyds_triangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}

void number_pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

void hollow_square(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void hollow_right_angled_triangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void zigzag_pattern(int n) {
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (j == 0 || j == n - 1 || (i % 2 == 1 && j == i)) {
    //             printf("*");
    //         } else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
}

void pascals_triangle(int n) {
    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
