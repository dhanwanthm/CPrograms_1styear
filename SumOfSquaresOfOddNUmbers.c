#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the value upto which sum of squares of odd numbers should be printed\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
            sum= sum + (i*i);
    }
    printf("The sum is : %d",sum);
    return 0;
}
