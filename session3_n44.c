#include<stdio.h>
int main(){

    char c;

    printf("Enter c : ");
    scanf("%c", &c);

    if(c>=65 && c<=90){
        printf("c is upper case ");
    }
    if(c>=97 && c<=122){
        printf("c is lower case ");
    }
    if(c>=48 && c<=57){
        printf("c is number ");
    }
    if(c=){
        printf("c is a special character ");
    }
    return 0;
}


