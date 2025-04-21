#include<stdio.h>
int main(){
    char c;

    printf("Enter the character : ");
    scanf("%c",&c);

    if(c>=65 && c<=90){
        printf("The character is uppercase ");
    }
    else if(c>=97 && c<=122){
        printf("The character is lowercase ");
    }
    return 0;
}
