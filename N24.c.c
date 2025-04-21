#include<stdio.h>
int main(){
    int numb1;
    int numb2;
    int numb3;

    printf("Enter the numb1 : ");
    scanf("%d",&numb1);

    printf("Enter the numb2 : ");
    scanf("%d",&numb2);

    printf("Enter the numb3 : ");
    scanf("%d",&numb3);

    if(numb1>numb2 && numb1>numb3){
        printf("The numb1 is largest ");
    }
    if(numb2>numb1 && numb2>numb3){
        printf("The numb2 is largest ");
    }
    if(numb3>numb1 && numb3>numb2){
        printf("The numb3 is largest ");
    }
    return 0;
}
