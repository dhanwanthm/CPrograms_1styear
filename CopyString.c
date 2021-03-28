#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    int i=0, length;
    printf("Enter the 1st string\n");
    gets(str1);
    printf("Enter the 2nd string\n");
    gets(str2);
    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("Copied string is: ");
    puts(str2);
    printf("Length of the string is %d",i);
    return 0;
}
