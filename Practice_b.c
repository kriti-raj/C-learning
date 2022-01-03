// Program to find area of a Circle

# include<stdio.h>

    int main(){

        int radius;
        float pi = 3.14;
        printf("Enter the radius of a circle\n");
        scanf("%d", &radius);

        printf("Area of your Circle is %f", pi*radius*radius);
    return 0;
}