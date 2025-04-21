#include<stdio.h>
int main(){
    int income;

    printf("Enter your income in lakh : ");
    scanf("%d",&income);

    if(income<=2.5L){
        printf("No tax...");
    }
    if(income>2.5L && income<=5L){
        printf("0.05 tax will be taken...");
    }
    if(income>5L && income<=10L){
        printf("0.1 tax will be taken...");
    }
    if(income>10L){
        printf("0.2 tax will be taken...");
    }
    return 0;
}
