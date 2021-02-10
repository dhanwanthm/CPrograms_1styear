#include<stdio.h>
int odd(int a)
{
    int sum=0;
    for(int i=1; i<=a; i++)
    {
        if(i%2!=0)
            sum= sum + (i*i);
    }
    printf("The sum is : %d",sum);
}
int main()
{
    int n;
    printf("Enter the value upto which sum of squares of odd numbers should be printed\n");
    scanf("%d", &n);
    odd(n);
    return 0;
}
