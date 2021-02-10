#include<stdio.h>
int even(int m, int n)
{
    int i;
    printf("The even numbers from m to n are:\n");
    if(m>n)
        printf("Error");
    else
    for(i=m; i<=n; i++)
    {
        if(i%2==0)
            printf("%d\n", i);
    }
}
int main()
{
    int a,b,e;
    printf("Enter the values from which to which the even numbers has to be printed\n");
    scanf("%d %d", &a, &b);
    e=even(a,b);
}
