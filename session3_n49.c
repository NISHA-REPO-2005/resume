#include<stdio.h>
int main(){
    int age;
    char female_or_male;

    printf("Enter the age : ");
    scanf("%d/n",&age);

    printf("Enter the gender : ");
    scanf("%c/n",&female_or_male);

    if(female_or_male=='F'||'f' && age>=60){
        printf("Eligible for senior citizen scheme... ");
    }
    else if(female_or_male=='M'||'m' && age>=65){
        printf("Eligible for senior citizen scheme... ");
    }
    else{
        printf("The senior citizen scheme is not applicable... ");
    }
    return 0;
}
