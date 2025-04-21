#include<stdio.h>
int main(){
    int attendance;

    printf("Enter the attendance : ");
    scanf("%d",&attendance);

    if(attendance>=75){
        printf("The student can sit for the exam");
    }
    else{
        printf("The student cannot sit for the exam");
    }
    return 0;
}

