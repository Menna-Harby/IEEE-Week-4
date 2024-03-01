#include <stdio.h>

int main() 
{
    int weekNumber;

    printf("Enter the week number (1-7): ");
    scanf("%d", &weekNumber);

    switch (weekNumber) {
        case 1:
            printf("Day of the week: Sunday\n");
            break;
        case 2:
            printf("Day of the week: Monday\n");
            break;
        case 3:
            printf("Day of the week: Tuesday\n");
            break;
        case 4:
            printf("Day of the week: Wednesday\n");
            break;
        case 5:
            printf("Day of the week: Thursday\n");
            break;
        case 6:
            printf("Day of the week: Friday\n");
            break;
        case 7:
            printf("Day of the week: Saturday\n");
            break;
        default:
            printf("Invalid week number. Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}
