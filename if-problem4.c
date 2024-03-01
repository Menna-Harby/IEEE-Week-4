#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 5 == 0 && number % 11 == 0) 
    {
        printf("%d is divisible by both 5 and 11.\n", number);
    } 
    
    else
    {
        if (number % 5 == 0)
        {
            printf("%d is divisible by 5 but not by 11.\n", number);
        }

        else if (number % 11 == 0) 
        {
            printf("%d is divisible by 11 but not by 5.\n", number);
        }

        else 
        {
            printf("%d is not divisible by both 5 and 11.\n", number);
        }
    }

    return 0;
}
