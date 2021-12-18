#include <stdio.h>

int fir_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fir_recursive(n - 1) + fir_recursive(n - 2);
    }
}

int main()
{
    int i;
    for (i = 1; i < 42; i++)
    {
        printf("%d\t", fir_recursive(i));
    }

    return 0;
}