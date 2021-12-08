// Program to discribute gifts to those who have passed either maths or science or both

#include <stdio.h>
int main()
{
    int subject;
    printf("Enter 1 if you have passed in Maths:\n");
    printf("Enter 2 if you have passed in Science:\n");
    printf("Enter 3 if you have passed in both maths and science:\n");
    scanf("%d", &subject);
    if (subject==1)
    {
        printf("You have won a gift vouture of Rs.15\n");
    }
    else if (subject==2)
    {
        printf("You have won a gift vouture of Rs.20\n");
    }
    else if (subject==3)
    {
        printf("You have won a gift vouture of Rs.45\n");
    }
    else
    {
        printf("Please enter a correct input.");
    }
    
      return 0;
}