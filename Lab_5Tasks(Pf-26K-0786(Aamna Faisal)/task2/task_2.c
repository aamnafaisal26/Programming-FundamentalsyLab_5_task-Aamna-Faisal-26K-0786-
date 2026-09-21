//A cinema charges different ticket prices based on age and day of the week. Take the customer's age and acharacter for the day ('W' for weekday, 'H' for weekend/holiday) as input. Using nested if-else, if the age isless than 12 or greater than 60, apply a discounted price; within that, check the day to decide between theweekday-discount price and the weekend-discount price. If the age is between 12 and 60, do the same daybased check but using the regular weekday and weekend prices. Print the final ticket price.
#include <stdio.h>
#include <ctype.h>
int main(){
    int age,price;
    char Day;
    printf("Enter Your Age");
    scanf("%d",&age);
    printf("Is It A \n1.Weekday(W)\n2.Holiday\\Weekend(H)\nEnter Choice(W/H)");
    scanf(" %c",&Day);
    Day=toupper(Day);
    if (age<12 || age > 60){
        printf("Age Discount Applied!\n");
        if (Day == 'W'){
            printf("Weekday Price\n");
            price=400;
        }
        else if (Day == 'H'){
            printf("Holiday/Weekend Price \n");
            price=700;
        }
        else{printf("Invalid Day\n");
        price=0;}
    }
    else{
        printf("No Age Discount\n");
         if (Day == 'W'){
            printf("Weekday Price\n");
            price=500;
        }
        else if (Day == 'H'){
            printf("Holiday/Weekend Price \n");
            price=800;
        }
        else{printf("Invalid Day\n");
        price=0;}
    }
    printf("final price :%d",price);
    return 0;




    
}