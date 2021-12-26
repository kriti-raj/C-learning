#include <stdio.h>
int main()
{

    int option;
    printf("Enter 1 if you want to print a triangular star or 2 if you want to print a reverse triangular star:");
    scanf("%d", option);
    int size;

    switch (option)
    {
    case 1:
        printf("Enter the size of pattern:\t");
        scanf("%d", &size);
        for (char i = 1; i <= size; i++)
        {

            printf("\n");

            for (char j = 1; j <= i; j++)
            {
                printf("*");
            }

            break;
        }

    case 2:
        printf("Enter the size of pattern:\t");
        scanf("%d", &size);
        for (char i = 1; i <= size; i++)
        {

            printf("\n");

            for (char j = 1; j <= size - i + 1; j++)
            {
                printf("*");
            }
        }
        break;
    }

    return 0;
}