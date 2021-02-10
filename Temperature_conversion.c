#include <stdio.h>
int main()
{
    float C,F;
    printf("Enter the temperature in Fahrenheit scale\n");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("The temperature in degree Celsius is %f", C);
    return 0;
}
