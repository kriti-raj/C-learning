// Program to convert units from one to another
#include <stdio.h>
float kmsmile(float kms)
{
    return (kms * 0.621371);
}
float inchesfoot(float inches)
{
    return (inches * 0.0833333);
}
float cmsinches(float cms)
{
    return (cms * 0.393701);
}
float poundkg(float pound)
{
    return (pound * 0.453592);
}
float inchesmeter(float meter)
{
    return (meter * 0.0254);
}
int main()
{
    int option;
    float value;
    again:
    printf("Press 1 for kms to mile:\n");
    printf("Press 2 for inches to foot:\n");
    printf("Press 3 for cms to inches:\n");
    printf("Press 4 for pounds to kgs:\n");
    printf("Press 5 for inches to meters:\n");
    printf("Press 6 to end this program:\n");
    scanf("%d", &option);
    if (option == 1)
    {
            printf("Enter the value you want to convert:\t");
            scanf("%f", &value);
            printf("%.2f kms to mile is %.2f\n\n\n", value, kmsmile(value));
            goto again;
    }
    else if (option == 2)
    {
            printf("Enter the value you want to convert:\t");
            scanf("%f", &value);
            printf("%.2f inches to foot is %.2f\n\n\n", value, inchesfoot(value));
            goto again;
    }
    else if (option == 3)
    {
            printf("Enter the value you want to convert:\t");
            scanf("%f", &value);
            printf("%.2f cms to inches is %.2f\n\n\n", value, cmsinches(value));
            goto again;
    }
    else if (option == 4)
    {
            printf("Enter the value you want to convert:\t");
            scanf("%f", &value);
            printf("%.2f pounds to kgs is %.2f\n\n\n", value, poundkg(value));
            goto again;
    }
    else if (option == 5)
    {
            printf("Enter the value you want to convert:\t");
            scanf("%f", &value);
            printf("%.2f inches to meters is %.2f\n\n\n", value, inchesmeter(value));
            goto again;
    }
    else if (option == 6)
    {
        goto end;
    }
    else
    {
        printf("Please enter a correct input:\n\n\n");
        goto again;
    }
    end:
    return 0;
}