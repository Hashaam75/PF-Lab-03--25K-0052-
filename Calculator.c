#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    double quot;

    if (b != 0) {
        quot = (double)a / (double)b;
    } else {
        // handle division by zero
        quot = 0.0;
    }

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    if (b != 0) {
        printf("Quotient: %.2f\n", quot);
    } else {
        printf("Quotient: undefined (division by zero)\n");
    }

    return 0;
}
