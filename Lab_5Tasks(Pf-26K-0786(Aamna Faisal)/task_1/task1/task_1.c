//Write a C program that takes a student's marks (0–100) as input. Using nested if-else statements, determinethe grade as follows: if marks are 90 or above, print Grade A; else if 75 or above, print Grade B; else if 60or above, print Grade C; else if 40 or above, print Grade D; otherwise print Fail. Additionally, within theGrade A branch, use a further nested if to check if the marks are exactly 100 and print 'Perfect Score!' inthat case
#include <stdio.h>
int main(){
    int marks;
    printf("Enter Your Marks");
    scanf("%d",&marks);
    if(marks<0 || marks>100){
        printf("Invalid Marks");
        return 0;}
    if (marks>=90){
        printf("Grade A\n");
        if (marks==100){
            printf("Perfect Score");
        }
    }
    else if (marks>=75 && marks<90){
        printf("Grade B\n");
    }
    else if (marks>=60 && marks<75){
        printf("Grade C\n");
    }
    else if (marks>=40 && marks<60){
        printf("Grade D\n");
    }
    else{printf("Fail");}
    return 0;

}