#include<stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Numbers after swapping is %d %d ", a,b );

    return 0;

}

