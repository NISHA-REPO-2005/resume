#include<stdio.h>
int main(){
    char student;
    float price;

    printf("Enter if the user is student or not : ");
    scanf("%c", &student);

    if(student=='Y'||student=='y'){
        printf("The user is eligible for the discount of 50% ");
    }
    else{
        printf("The user is not eligible for the discount ");
    }
    return 0;
}
