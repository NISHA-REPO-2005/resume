#include<stdio.h>
int main(){
    int bp;

    printf("Enter user's blood pressure(bp) in mm Hg: ");
    scanf("%d",&bp);

    if(bp<=N80 && bp<=120){
        printf("The bloop pressure of the user is Normal...");
    }
    if(bp>80 && bp>130){
        printf("The blood pressure of the user is High...");
    }
    else if(bp==60 && bp==90){
        printf("The blood pressure of the user is Low...");
    }
    return 0;
}
