#include<stdio.h>
int main(){
    int speed;

    printf("Enter the speed : ");
    scanf("%d",&speed);

    if(speed>100){
        printf("Over Speeding : ");
    }
    if(speed<40){
        printf("Too Slow : ");
    }
    else if(speed>=40 && speed<=100){
        printf("Normal Speed : ");
    }
    printf("The speed is %d km/h", speed);
    return 0;
}
