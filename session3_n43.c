#include<stdio.h>
int main(){
    int daynumb;

    printf("Enter a daynumb : ");
    scanf("%d",&daynumb);

    if(daynumb>=1 && daynumb<=5){
        printf("The day is a weekday ");
    }
    else if(daynumb>=6 && daynumb<=7) {
        printf("The day is a weekend ");
    }
    else{
        printf("The day is invalid");
    }
    return 0;
}
