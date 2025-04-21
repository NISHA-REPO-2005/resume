#include<stdio.h>
#include<math.h>
float main()
{
    float c;
    float f;

    printf("Enter the temp in f : ");
    scanf("%f",&f);

    c = (f - 32) * 5/9;

    printf("The temp in c is %f ",c);

    return 0;

 }
