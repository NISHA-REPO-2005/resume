#include<stdio.h>
int main(){
    int numb1;
    int numb2;
    int numb3;

    printf("Enter the numb1 : ");
    scanf("%d",&numb1);

    printf("Enter the numb2 : ");
    scanf("%d",&numb2);

    printf("Enter the numb3 : ");
    scanf("%d",&numb3);

    if(numb1>numb2 && numb1>numb3){
        printf("numb1 is the greatest");
    }
    if(numb2>numb1 && numb2>numb3){
        printf("numb2 is the greatest");
    }
    if(numb3>numb1 && numb3>numb2){
        printf("numb3 is the greatest");
    }
    return 0;
}



