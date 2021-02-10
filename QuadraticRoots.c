#include <stdio.h>
#include <math.h>
int quadraticroots(float a, float b, float c)
{
    float discriminant, r1, r2, realnum, imgnum;
    discriminant = (b*b)-4*a*c;
    if(discriminant>0)
    {
        r1 = (-b + sqrt(discriminant))/(2*a);
        r2 = (-b - sqrt(discriminant))/(2*a);
        printf("root1 = %f and root2 = %f", r1, r2);
    }
    else if(discriminant == 0)
    {
        r1=r2=(-b)/(2 * a);
        printf("root1 = root2 = %f", r1);
    }
        else
        {
            realnum =(-b)/(2 * a);
            imgnum =sqrt(-discriminant)/(2 * a);
            printf("Root 1 = %.2f+%.2fi and Root 2 = %.2f-%.2fi", realnum, imgnum);
        }
        return 0;
}
int main()
{
    float p,q,r;
    printf("Enter the coefficients a, b and c:- \n");
    scanf("%f %f %f", &p, &q, &r);
    quadraticroots(p,q,r);
    return 0;
}
