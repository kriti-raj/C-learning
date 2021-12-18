// Program to input two numbers for addition.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number \n");
    scanf("%d", &a);

    printf("Enter the second number \n");
    scanf("%d", &b);

    printf("The sum of the two numbers is %d", a + b);
    return 0;
}