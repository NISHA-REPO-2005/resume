#include<stdio.h>
//*(0,0)*(0,1)*(0,2)*(0,3)
//*(1,0)*(1,1)*(1,2)
//*(2,0)*(2,1)
//*(3,0)
int main(){
    for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            if(j>=i){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
