#include <stdio.h>
#include <math.h>
int main()
{
    float rem, a, b;
    printf("Enter two decimal numbers for calculating their reminder:");
    scanf("%f", &a);
    scanf("%f", &b);

    printf("The reminder is %f.", fmod(a, b));
    return 0;
}