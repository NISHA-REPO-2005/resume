#include<stdio.h>
int main(){
    int BMI;

    printf("Enter BMI : ");
    scanf("%d",&BMI);

    if(BMI<18.5){
        printf("The body is of underweight : ");
    }
    if(BMI>=18.5 && BMI<=24.9){
        printf("The body is of normal weight : ");
    }
    if(BMI>=25 && BMI<=29.9){
        printf("The body is of over weight : ");
    }
    if(BMI>=30){
        printf("The body is obese : ");
    }
    return 0;
}
