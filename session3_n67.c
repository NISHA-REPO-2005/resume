#include<stdio.h>
int main(){
    int orders;

    printf("Enter the number of orders in :Rs ");
    scanf("%d",&orders);

    if(orders>500){
        printf("The fees is Rs.0 ");
    }
    if(orders>=100 && orders<=500){
        printf("The fees is Rs.30 ");
    }
    if(orders<100){
        printf("The fees is Rs,50 ");
    }
    return 0;
}
