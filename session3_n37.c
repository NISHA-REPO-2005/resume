#include<stdio.h>
int main(){
    int age;
    int income;

    printf("Enter the age : ");
    scanf("%d",&age);

    printf("Enter the income : ");
    scanf("%d",&income);

    if(age>=18 && income>=24){
        printf("Person is eligible : ");
    }
    else{
        printf("Person is not eligible : ");
    }
    return 0;
}

