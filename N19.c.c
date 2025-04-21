#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter the 1st number ");
    scanf("%d", &a);

    printf("Enter the 2nd number ");
    scanf("%d", &b);

    printf("the 2nd number 0 ");
    //if the 2nd number is zero division is not possible....

    c=a/b;

    printf("the division is %d",c);

    return 0;
}

