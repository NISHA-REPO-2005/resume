#include<stdio.h>
int main(){
    int mm;

    printf("Enter the rainfall in mm : ");
    scanf("%d",&mm);

    if(mm>100){
        printf("The rain is Heavy... ");
    }
    if(mm>=30 && mm<=100){
        printf("The rain is Moderate... ");
    }
    else if(mm>30 && mm<=99){
        printf("Normal Speed : ");
    }
    printf("The rainfall is %d mm", mm);
    return 0;
}
