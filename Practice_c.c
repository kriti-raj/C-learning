// Program to find Volume of a Cylinder

# include<stdio.h>

    int main(){

        int radius, height;
        float pi = 3.14;
        printf("Enter the radius of a cylinder\n");
        scanf("%d", &radius);

        printf("Enter the height of a cylinder\n");
        scanf("%d", &height);

        printf("Area of your Circle is %f", pi*radius*radius*height);
        printf("m^3");
    return 0;
}