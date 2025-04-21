#include<stdio.h>
int main(){
    char pass=8,hrs;

    printf("Enter the pass : ");
    scanf("%c",&pass);

    if(hrs>=2){
        printf("The pass is valid ");
    }
    else{
        printf("The pass is invalid ");
    }
    return 0;
}
