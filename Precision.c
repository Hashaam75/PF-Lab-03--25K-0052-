#include <stdio.h>

int main() {
    double num;

    printf("Enter a floating-point number: ");
    scanf("%lf", &num);

    printf("With 2 decimal places: %.2f\n", num);
    printf("With 6 decimal places: %.6f\n", num);

    return 0;
}
