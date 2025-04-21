#include<stdio.h>
int main(){
    int grades;

    printf("Enter the grades: ");
    scanf("%d",&grades);

    if(grades>=90){
        printf("The grades are A ");
    }
    if(grades>70 && grades<89){
        printf("The grades are B ");
    }
    if(grades>50 && grades<69){
        printf("The grades are C ");
    }
    if(grades<50){
        printf("Fail");
    }
    return 0;
}
