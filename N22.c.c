#include<stdio.h>
int main(){
    int price;
    int discount=10;
    int finalprice;

    printf("Enter the price : ");
    scanf("%d",&price);

    if(price>1000){
            printf("The discount is applicable : ");
            finalprice= price-price*(10/100);
    }
    else{
        printf("The discount is not applicable : ");
        finalprice=price;
    }
    printf("The finalprice is %d",finalprice);
    return 0;
}
