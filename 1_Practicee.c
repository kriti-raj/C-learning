// Progrme to find simple interest

# include<stdio.h>

    int main()
    {

        int p,r,t;
        printf("Enter Principal\n");
        scanf("%d", &p);
        
        printf("Enter Rate of Interest\n");
        scanf("%d", &r);

        printf("Enter Year for interest\n");
        scanf("%d", &t);

        printf("Your Simple Interest for the given time period is %d", (p*r*t) / 100);
    return 0;
}