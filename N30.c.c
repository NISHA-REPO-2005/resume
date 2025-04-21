#include<stdio.h>
int main(){
    int unit;*
    int ratebelow100=1;
    int rateabove100andbelow200=2;
    int rateabove200=3;
    int bill;

    printf("Enter the unit : ");
    scanf("%d", &unit);

    if(unit<100){
            bill=unit*ratebelow100;
    }
    else if(unit<200){
            bill=100*ratebelow100+(unit-100)*rateabove100andbelow200;
    }
    else{
        bill=100*ratebelow100+100*rateabove100andbelow200+(unit-200)*rateabove200;
    }
    printf("The final bill is %d", bill);

    return 0;
}

