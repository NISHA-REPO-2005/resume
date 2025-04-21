#include<stdio.h>
int main(){
    int income;

    printf("Enter the user's income : ");
    scanf("%d",&income);

    if(income<=3L && income!=0){
        printf("The user is eligible for subsidy ");
    }
    else{
        printf("The user is not eligible for subsidy ");
    }
    return 0;
}
