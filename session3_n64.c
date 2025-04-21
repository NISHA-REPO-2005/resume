#include<stdio.h>
int main(){
    int score;

    printf("Enter the score of the user : ");
    scanf("%d",&score);

    if(score<=100 && score>=90){
        printf("Excellent");
    }
    if(score<=89 && score>=70){
        printf("Good");
    }
    if(score<=69 && score>=50){
        printf("Average");
    }
    else if(score<=49 && score>=30){
        printf("Needs Improvement");
    }
    return 0;
}
