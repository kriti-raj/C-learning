#include <stdio.h>
int main()
{
    float a;
    float b;
    printf("Enter the first number:");
    
    scanf("%f", &a);
    printf("Enter the second number:");
    scanf("%f", &b);
    printf("a + b = %f\n", a + b);
    printf("a - b = %f\n", a - b);
    printf("a * b = %f\n", a * b);
    printf("a / b = %f\n", a / b);
    return 0;
}