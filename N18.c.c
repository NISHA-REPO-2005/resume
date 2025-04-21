#include<stdio.h>
#include<math.h>
float main()
{
    float a;
    float b;
    float c;

    printf("Enter the distance ");
    scanf("%f", &a);

    printf("Enter the time ");
    scanf("%f", &b);

    c=(a/b);

    printf("The speed is %f", c);

    return 0;
}

