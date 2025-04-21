#include<stdio.h>
int main(){
    int numb;

    printf("Enter a numb : ");
    scanf("%d",&numb);

    if(numb%5==0 && numb%11==0){
        printf("The numb is divisible ");
    }
    else{
        printf("The numb is not divisible ");
    }
    return 0;
}
