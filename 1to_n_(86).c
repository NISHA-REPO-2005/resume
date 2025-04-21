#include<stdio.h>
int main(){
    int n,numb;
    printf("Enter n : ");
    scanf("%d",&n);
    for(numb=1; numb<=n; numb=numb+1){
        printf("%d\n",numb);
    }
    return 0;
}
