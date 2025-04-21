#include<stdio.h>
int main(){
    char ch;

    printf("Enter a ch : ");
    scanf("%c",&ch);

    if((ch>=97 && ch<=122)||(ch>=65 && ch<=90)){
        printf("Alphabet");
    }else if(ch>=48 && ch<=57){
        printf("Number");
    }else{
        printf("Special characters");
    }
    return 0;
}
