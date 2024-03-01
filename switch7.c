#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter coefficients (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
            break;

        case 0:
           
            root1 = -b / (2 * a);
            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2lf\n", root1);
            break;

        default:
           
            root1 = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("Root 1 = %.2lf + %.2lfi\n", root1, imaginaryPart);
            printf("Root 2 = %.2lf - %.2lfi\n", root1, imaginaryPart);
            break;
    }

    return 0;
}
