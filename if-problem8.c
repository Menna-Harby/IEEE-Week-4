#include <stdio.h>
#include <ctype.h>

int main() 

{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {
        char lowerCh = tolower(ch);

        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') 
        {
            printf("%c is a vowel.\n", ch);
        } 
        else 
        {
            printf("%c is a consonant.\n", ch);
        }
    } 
    else 
    {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
