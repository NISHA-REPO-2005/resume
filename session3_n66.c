#include<stdio.h>
int main(){
    int age;

    printf("Enter the age : ");
    scanf("%d",&age);

    if(age<=12){
        printf("The user is a child...");
    }
    if(age>=13 && age<=17){
        printf("The user is a teen...");
    }
    if(age>=18 && age<=60){
        printf("The user is an adult...");
    }
    else if(age>60){
        printf("The user is a senior...");
    }
    return 0;
}
