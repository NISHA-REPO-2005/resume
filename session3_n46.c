#include<stdio.h>
int main(){
    int numb;

    printf("Enter the numb : ");
    scanf("%d",&numb);

    if(numb>0){
        printf("The number is positive ");
    }
    if(numb<0){
        printf("The number is negative ");
    }
    if(numb==0){
        printf("The numb is zero ");
    }
    return 0;
}
