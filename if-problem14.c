#include <stdio.h>

int main() 
{
    float angle1, angle2, angle3;

    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
     {
        printf("The angles form a valid triangle.\n");

        if (angle1 == 60 && angle2 == 60 && angle3 == 60) 
        {
            printf("It is an equilateral triangle.\n");
        } 
        else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) 
        {
            printf("It is an isosceles triangle.\n");
        } 
        else 
        {
            printf("It is a scalene triangle.\n");
        }
    } 
    else 
    {
        printf("The angles do not form a valid triangle.\n");
    }

    return 0;
}
