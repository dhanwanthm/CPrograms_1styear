#include <stdio.h>
#include <math.h>
float area(float b, float h)
{
    float a;
    a=(b*h)/2;
    return a;
}
int main()
{
    float b,h,ar;
    printf("Enter the values of base and height\n");
    scanf("%f %f", &b, &h);
    ar=area(b,h);
    printf("The area of the triangle is %f", ar);
    return 0;
}
