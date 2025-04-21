#include<stdio.h>
int main(){
    int year;

    printf("Enter the year : ");
    scanf("%d",&year);

    if((year%100)==0){
        printf("The year is a century year...");
    }
    else{
        printf("The year is not a century year...");
    }
    return 0;
}
