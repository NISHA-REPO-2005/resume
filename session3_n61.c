#include<stdio.h>
int main(){
    int numb;

    printf("Enter a number : ");
    scanf("%d",&numb);

    if(numb%3==0 && numb%5==0){
        printf("The number is a multiple of 3 and 5 ");
    }
    else{
        printf("The number is not a of 3 and 5 ");
    }
    return 0;
}
