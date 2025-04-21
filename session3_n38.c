#include<stdio.h>
int main(){
    int age;
    int income;
    int creditscore;

    printf("Enter the age : ");
    scanf("%d",&age);

    printf("Enter the income : ");
    scanf("%d",&income);

    printf("Enter the creditscore : ");
    scanf("%d",&creditscore);

    if(age>=18 && income>=24 && creditscore>=750){
        printf("Person is eligible : ");
    }
    else{
        printf("Person is not eligible : ");
    }
    return 0;
}


