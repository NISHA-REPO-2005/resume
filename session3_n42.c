#include<stdio.h>
int main(){
    int grades;

    printf("Enter the grades : ");
    scanf("%d",&grades);

    if(grades>=80 && grades>=100){
        printf("The award will be given ");
    }
    else{
        printf("The award will not be given ");
    }
    return 0;
}
