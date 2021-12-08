// error

#include <stdio.h>

int main()
{
    char name, e, m, state;
    int contact, gender;
    printf("Enter your name:\t");
    scanf("%c", &name);
    
    printf("Enter 1 for male and 2 for female\n");
    scanf("%d", &gender);
   
    switch (gender)
    {
    case 1:

        printf("Enter 1 if you want you submit your email or 2 if you want to input your mobile number");
        scanf("%d", &contact);

        switch (contact)
        {
        case 1:

            printf("Enter your Email ID:");
            scanf("%c", &e);

            printf("Enter your state of residence:");
            scanf("%c", &state);
            printf("You have successfully compleated the Application form");
            printf("You have entered the following Data:\n");
            printf("Name:\t%c\n", name);
            printf("gender:\t male \n");
            printf("Contact:\t%c\n", e);
            printf("State:\t%c", state);
            break;

        case 2:

            printf("Enter your Mobile Number:");
            scanf("%c", &m);

            printf("Enter your state of residence:");
            scanf("%c", &state);
            printf("You have successfully compleated the Application form");
            printf("You have entered the following Data:\n");
            printf("Name:\t%c\n", name);
            printf("gender:\t male \n");
            printf("Contact:\t%c\n", m);
            printf("State:\t%c", state);
            break;
        
        default:
            printf("Please Enter a valid input1");
            break;
        }

        break;
    case 2:

        printf("Enter 1 if you want you submit your email or 2 if you want to input your mobile number");
        scanf("%d", &contact);

        switch (contact)
        {
        case 1:

            printf("Enter your Email ID:");
            scanf("%c", &e);

            printf("Enter your state of residence:");
            scanf("%c", &state);
            printf("You have successfully compleated the Application form");
            printf("You have entered the following Data:\n");
            printf("Name:\t%c\n", name);
            printf("gender:\t female \n");
            printf("Contact:\t%c\n", e);
            printf("State:\t%c", state);
            break;

        case 2:

            printf("Enter your Mobile Number:");
            scanf("%c", &m);

            printf("Enter your state of residence:");
            scanf("%c", &state);
            printf("You have successfully compleated the Application form");
            printf("You have entered the following Data:\n");
            printf("Name:\t%c\n", name);
            printf("gender:\t female \n");
            printf("Contact:\t%c\n", m);
            printf("State:\t%c", state);
            break;

        default:
            printf("Please Enter a valid input2");
            break;
        }
        break;

    default:
        printf("Please enter a valid input main");
        break;
    }

    return 0;
}