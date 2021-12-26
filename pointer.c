#include <stdio.h>
int main()
{
    int a = 50;
    int *ptra = &a;
    int *ptrb = NULL;
    printf("The address of a is %d\n", a);
    printf("The address of a is %p\n", ptra);
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", ptrb);
    printf("The value of a is %d\n", *ptrb);
    return 0;
}