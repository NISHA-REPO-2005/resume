#include<stdio.h>
int main(){
    char op;
    int a;
    int b;
    int result;

    printf("Enter an op : ");
    scanf("%c",&op);

    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);

    if(op=='+'){
        result=a+b;
    }
    if(op=='-'){
        result=a-b;
    }
    if(op=='*'){
        result=a*b;I
    }
    if(op=='/'){
        Iresult=a/b;
    }

    printf("Enter the overall result %d", result);

    return 0;
}
