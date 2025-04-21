#include<stdio.h>
int main(){
    int numb;

    printf("Enter a number : ");
    scanf("%d",&numb);

    if(numb>=10 && numb<=100){
        printf("The number lies within a specific range...");
    }
    else{
        printf("The number does not lies within a specific range...");
    }
    return 0;
}
