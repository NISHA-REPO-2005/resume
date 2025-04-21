#include<stdio.h>
int main(){
    int side1;
    int side2;
    int side3;

    printf("Enter the side1 : ");
    scanf("%d",&side1);

    printf("Enter the side2 : ");
    scanf("%d",&side2);

    printf("Enter the side3 : ");
    scanf("%d",&side3);

    if(side1+side2>=side3){
        printf("The triangle is valid ");
    }
    else{
        printf("The triangle is invalid ");
    }

    return 0;
 }
