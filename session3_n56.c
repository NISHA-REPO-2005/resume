#include<stdio.h>
int main(){
    int hour;

    printf("Enter the hour : ");
    scanf("%d",&hour);

    if(hour>=00.01 && hour<=12.00){
        printf("Good Morning ");
    }
    if(hour>=12.01 && hour<=16.00){
        printf("Good Afternoon ");
    }
    if(hour>=16.00 && hour<=23.59){
        printf("Good Evening");
    }
    return 0;
}
