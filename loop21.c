#include <stdio.h>

double power(int base, int exponent) {
    double result = 1.0;

    if (exponent < 0) {
        base = 1 / base;
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%d^%d = %.2lf\n", base, exponent, power(base, exponent));

    return 0;
}
