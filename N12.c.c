#include<stdio.h>
#include<math.h>
float main()
{
    float a;
    float r;

    printf("Enter the r ");
    scanf("%f", &r);

    a = 3.14 * pow(r, 2);

    printf("the area is %f", a);

    return 0;
}
