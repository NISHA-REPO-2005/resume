#include<stdio.h>
int main(){
    int temp;

    printf("Enter the temp : ");
    scanf("%d",&temp);

    if(temp<0){
        printf("The temp is freezing");
    }
    if(temp>25 && temp<=99){
        printf("The temp is normal");
    }
    if(temp>=100){
        printf("The temp is boiling");
    }
    return 0;
}
