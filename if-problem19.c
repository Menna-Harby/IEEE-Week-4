#include <stdio.h>

int main()
 {
    float physics, chemistry, biology, mathematics, computer;
    float totalMarks, percentage;
    

   printf("Enter marks in Physics");
   scanf("%f",&physics);
   
   printf("Enter marks in Chemistry");
   scanf("%f",&chemistry);

   printf("Enter marks in Biology");
   scanf("%f",&biology);

   printf("Enter marks in Mathematics");
   scanf("%f",&mathematics);

   printf("Enter marks in Computer");
   scanf("%f",&computer);
   
   
    if (physics >= 0 && physics <= 110 &&
        chemistry >= 0 && chemistry <= 90 &&
        biology >= 0 && biology <= 100 &&
        mathematics >= 0 && mathematics <= 150 &&
        computer >= 0 && computer <= 70)
        
        {

        totalMarks = physics + chemistry + biology + mathematics + computer;
        percentage = (totalMarks / 520) * 100;

        printf("Percentage: %.2f%%\n", percentage);
        if (percentage >= 90) 
        {
            printf("Grade: A\n");
        } 
        else if (percentage >= 80)
        {
            printf("Grade: B\n");
        } 
        else if (percentage >= 70)
        {
            printf("Grade: C\n");
        }
        else if (percentage >= 60) 
        {
            printf("Grade: D\n");
        } 
        else if (percentage >= 40)
        {
            printf("Grade: E\n");
        } 
        else 
        {
            printf("Grade: F\n");
        }
    } 
    else
    {
        printf("Invalid marks entered. Please enter marks in valid range.\n");
    }

    return 0;
}

