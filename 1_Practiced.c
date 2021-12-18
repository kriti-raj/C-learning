// Celcius to Fahrenheit

# include<stdio.h>

    int main(){

        float temp;
        printf("Enter temperature in Celcius\n");
        scanf("%f", &temp);
        float far = (temp *9/5) + 32;
        printf("Temperatuer in Fahrenheit is %f", far);
    return 0;
}