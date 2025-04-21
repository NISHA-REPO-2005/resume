#include<stdio.h>
int main(){
    int customer;

    printf("Enter the number of times the customer visited : ");
    scanf("%d",&customer);

    if(customer>10){
        printf("A loyalty reward will be given to the customer ");
    }
    else{
        printf("No reward will be given....");
    }
    return 0;
}

