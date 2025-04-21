#include<stdio.h>
int main(){
    int temp;

    printf("Enter the temperature in celcius : ");
    scanf("%d",&temp);

    if(temp>22 && temp>=32){
        printf("The temperature is Hot...");
    }
    if(temp>=0){
        printf("The temperature is Cold...");
    }
    else if(temp>=11 && temp<=21){
        printf("The temperature is Moderate...");
    }
    return 0;
}
