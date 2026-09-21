//Write a program that reads the number of units of electricity consumed and the connection type ('D' fodomestic, 'C' for commercial). Using nested if-else, first check the connection type. Inside the domesticbranch, nest further if-else statements to apply different per-unit rates for usage ranges 0–100, 101–300,and above 300 units. Do the same with different (commercial) rates inside the commercial branch. Print thetotal bill
#include <stdio.h>
#include <ctype.h>
int main(){
    int units,price_per_unit=0,total=0;
    char connection;
    printf("Enter Number of Units Consumed");
    scanf("%d",&units);
    printf("Connection Type?\n1.Domestic(D)\n2.Commercial(C)\nEnter Your Choice(D/C)");
    scanf(" %c",&connection);
    connection=toupper(connection);
    if(connection == 'D'){
        if(units>=0 && units <=100){
            price_per_unit=10;
            }
        else if (units>100 && units<=300){
            price_per_unit=20;
        }
        else if (units>300){
            price_per_unit=30;
        }

    }
    else if (connection == 'C'){
        if(units>=0 && units <=100){
            price_per_unit=15;
            }
        else if (units>100 && units<=300){
            price_per_unit=25;
        }
        else if (units>300){
            price_per_unit=35;
        }

    }
    else{printf("Invalid Connection\n");}
    total=price_per_unit*units;
    printf("price per unit : %d", price_per_unit);
    printf("Total Bill : %d",total);
    return 0;

}