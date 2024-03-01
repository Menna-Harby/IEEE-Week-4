#include <stdio.h>

int main()
 {
    int num, reversedNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

 
    printf("The reverse of the number is: %d\n", reversedNum);

    return 0;
}
