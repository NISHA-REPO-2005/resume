#include<stdio.h>
int main(){
    int numb;
    int integer1;
    int integer2;

    printf("Enter the numb : ");
    scanf("%d",&numb);

    printf("Enter the 1st integer : ");
    scanf("%d",&integer1);

    printf("Enter the 2nd integer : ");
    scanf("%d",&integer2);

    if(numb==integer1*integer2){
        printf("The number is a perfect square...");
    }
    else{
        printf("The number is not a perfect square...");
    }
    return 0;
}
