// Program to write consecutive numbers from 0 till given number
#include <stdio.h>

int main()
{
    int num, index = 0;
    printf("Enter a number:\t");
    scanf("%d", &num);
    do
    {
        printf("%d\t", index);
        index = index + 1;
    } while (index<=num);
    return 0;
}