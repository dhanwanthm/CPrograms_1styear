#include <stdio.h>
char character(char c)
{
    switch(c)
    {
        case 'A':
        case 'a':
                    printf("\n%c is a vowel",c);
                    break;
        case 'E':
        case 'e':
                    printf("\n%c is a vowel",c);
                    break;
        case 'I':
        case 'i':
                    printf("\n%c is a vowel",c);
                    break;
        case 'O':
        case 'o':
                    printf("\n%c is a vowel",c);
                    break;
        case 'U':
        case 'u':
                    printf("\n%c is a vowel",c);
                    break;
        default:
                    printf("%c is consonant",c);
    return c;
    }
}
int main()
{
    char ch, C;
    printf("Enter any character\n");
    scanf("%c",&ch);
    C=character(ch);
    return 0;
}
