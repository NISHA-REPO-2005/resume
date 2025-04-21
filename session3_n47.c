#include<stdio.h>
int main(){
    int numb;

    printf("Enter the numb : ");
    scanf("%d",&numb);

    if(numb>=0 && numb<=9){
        printf("The number is single-digit ");
    }
    if(numb>=10 && numb<=99){
        printf("The number is two-digit ");
    }
    if(numb>100){
        printf("The number is more ");
    }
    return 0;
}

