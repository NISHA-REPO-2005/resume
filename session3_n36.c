#include<stdio.h>
int main(){
    int marks;

    printf("Enter the marks : ");
    scanf("%d",&marks);

    if(marks>40){
        printf("Pass in Maths,Eng,Hindi : ");
    }
    else{
        printf("Fail in Maths,Eng,Hindi : ");
    }
    return 0;
}
