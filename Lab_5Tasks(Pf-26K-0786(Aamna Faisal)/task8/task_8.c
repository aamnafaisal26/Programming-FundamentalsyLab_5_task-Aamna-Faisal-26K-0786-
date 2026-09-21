//Write a program that models a restaurant menu using nested switch-case statements. The outer switchshould let the user choose a category using a number: 1 for Beverages, 2 for Main Course, or 3 for Desserts.Within each category's case, use an inner switch to let the user pick one of three specific items and print itsprice. Make sure every switch (outer and inner) has a default case.
#include <stdio.h>
int main (){
    int choice_1,choice_2;
    printf("Enter From Following\n1,Beverages\n2.Main Course\n3.Dessert\nPick Your Choice(1-3):");
    scanf("%d",&choice_1);
    switch(choice_1){
        case 1:
          printf("Choose Your Beverage \n1.Mint Lemonade\n2.Pina Colda\n3.Shake\nEnter Choice(1-3):");
          scanf("%d",&choice_2);
          switch(choice_2){
            case 1 :
              printf("price : 3000");
              break;
            case 2 :
              printf("price : 5000");
              break;
            case 3 :
              printf("price : 4000");
              break;
            default:
               printf("Invalid Drink");
               break;
            
          }
          break;
        case 2:
            printf("Choose Your Main Course \n1.Burger\n2.Pizza\n3.Steak\nEnter Choice(1-3):");
          scanf("%d",&choice_2);
          switch(choice_2){
            case 1 :
              printf("price : 3500");
              break;
            case 2 :
              printf("price : 5500");
              break;
            case 3 :
              printf("price : 7000");
              break;
            default:
               printf("Invalid Main Course");
               break;
            
          }
          break;
        case 3 :
           printf("Choose Your Dessert \n1.Lava Cake\n2. Ice Cream\n3.Cheese Cake\nEnter Choice(1-3):");
          scanf("%d",&choice_2);
          switch(choice_2){
            case 1 :
              printf("price : 1000");
              break;
            case 2 :
              printf("price : 800");
              break;
            case 3 :
              printf("price : 600");
              break;
            default:
               printf("Invalid Dessert");
               break;
            
          }
          break;
        default:
          printf("Invalid Menu Choice");
          break;
        
        }
    return 0;    
    

}