#include <stdio.h>

int main() {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12)
    
     {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            printf("The month has 31 days.\n");
        } 
        else if (month == 4 || month == 6 || month == 9 || month == 11) 
        {
            printf("The month has 30 days.\n");
        } 
        else 
        {
            printf("February has 28 or 29 days.\n");
        }
    } 
    else
    {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}
