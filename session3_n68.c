#include<stdio.h>
int main(){
    int subj1;
    int subj2;
    int subj3;

    printf("Enter the exam marks for the 1st subject : ");
    scanf("%d",&subj1);

    printf("Enter the exam marks for the 2nd subject : ");
    scanf("%d",&subj2);

    printf("Enter the exam marks for the 3rd subject : ");
    scanf("%d",&subj3);

    if(subj1>=85 && subj2>=85 && subj3>=85){
        printf("The person is eligible for the scholarship...");
    }
    else{
        printf("The person is not eligible for the scholarship...");
    }
    return 0;
}
