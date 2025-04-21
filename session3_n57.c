#include<stdio.h>
int main(){
    int score;

    printf("Enter the exam score : ");
    scanf("%d",&score);

    if(score>=40){
        printf("The student passed in exam...");
    }
    else{
        printf("The student failed in exam...");
    }
    return 0;
}
