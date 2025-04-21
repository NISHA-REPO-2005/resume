#include<stdio.h>
int main(){
    int age;

    printf("Enter the age : ");
    scanf("%d",&age);

    if(age>=18){
        printf("The voter is eligible ");
    }
    else{
        printf("The voter is not eligible ");
    }

    return 0;
}

