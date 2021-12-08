#include<stdio.h>

int main(){
    int num, index=0;
    printf("Enter the number:");
    scanf("%d", &num);
    while(index<num){
        printf("%d\n", index);
        index = index + 1;
    }
    return 0;
}