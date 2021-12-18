#include <stdio.h>
int main()
{
    printf("0\t");
    int a = 0, b = 1;
    for (int i = 0; i < 42; i++)
    {
        b = a + b;
        a = b - a;
        printf("%d\t", a);
    }

    return 0;
}