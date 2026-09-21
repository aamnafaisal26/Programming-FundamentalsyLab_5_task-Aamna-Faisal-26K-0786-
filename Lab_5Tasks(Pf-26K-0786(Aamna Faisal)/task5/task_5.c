//Write a program that accepts three sides of a triangle as input. First use a nested if-else check to determinewhether the three sides can actually form a valid triangle (the sum of any two sides must be greater than thethird). If valid, use further nested if-else statements to classify the triangle as Equilateral, Isosceles, orScalene. If not valid, print 'Not a valid triangle'.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter Side 1");
    scanf("%d",&a);
    printf("Enter Side 2");
    scanf("%d",&b);
    printf("Enter Side 3");
    scanf("%d",&c);
    if(a+b > c || b+c > a || a+c > b){
        printf("Triange\n");
        if(a==b && b==c && a==c){
            printf("Equilateral Triangle");}
        else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a) ){
            printf("Iscoseles Triangle");
        }
        else if (a!=b && b!=c && c!=a){
            printf("Scalene Triangle");
        }
    }
    else{printf("Not a Triangle");}

}