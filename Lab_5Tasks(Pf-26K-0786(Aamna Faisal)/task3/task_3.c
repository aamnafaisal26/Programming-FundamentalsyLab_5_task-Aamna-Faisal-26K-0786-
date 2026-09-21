//xtend the largest-of-three-numbers example covered in the lab (Example 1) to work for four numbers X,Y, Z, and W. Use nested if-else statements only (no logical AND/OR operators) to determine and print thelargest value among the four
#include <stdio.h>
int main(){
    int X,Y,Z,W;
    printf("Enter Num1");
    scanf("%d",&W);
    printf("Enter Num2");
    scanf("%d",&X);
    printf("Enter Num3");
    scanf("%d",&Y);
    printf("Enter Num4");
    scanf("%d",&Z);
    if(W>X){
        if(W>Y){
            if(W>Z){
                printf("W is Largest");
            }
            else{printf("Z is Largest");}
        
        }
        else if(Y>Z){
            printf("Y is Largest");
        }
        else{printf("Z is Largest");}
    }
    else if (X>Y){
        if(X>Z){
            printf("X is Largest");
        }
        else{
            printf("Z is Largest");
        }
    }
    else if (Y>Z){
        printf("Y is Largest");
    }
    else{
        printf("Z is Largest");
    }
    return 0;
}