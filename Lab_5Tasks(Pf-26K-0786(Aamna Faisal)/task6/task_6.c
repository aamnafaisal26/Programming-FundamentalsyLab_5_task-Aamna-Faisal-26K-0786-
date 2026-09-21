//Write a program using a nested switch-case structure. The outer switch should ask the user to select a mode:'1' for Basic Arithmetic or '2' for Power/Root operations. If mode '1' is selected, use an inner switch on anoperator character ('+', '-', '*', '/') to perform the corresponding operation on two numbers. If mode '2' selected, use an inner switch to choose between computing a square (case 's') or a square root (case 'r') of anumber, using the math library where needed
#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
    int mode,num1,num2,result_1;
    char op_char,comp_char;
    float result_2;
    printf("Modes:\n1.Operation(+-*/)\n2.Computing(square/root)\nEnter Mode(1-2)");
    scanf("%d",&mode);
    switch(mode){
        case 1 :
           printf("Enter Number1");
           scanf("%d",&num1);
           printf("Enter Number2");
           scanf("%d",&num2);
           printf("Enter Operator(+-*/)");
           scanf(" %c",&op_char);
           switch (op_char)
           {
           case '+' :
               result_1 = num1 + num2;
               printf("Sum: %d",result_1);
               break;
            case '-':
               result_1=num1-num2;
               printf("Difference : %d",result_1);
               break;
            case '/':
               result_2=(float)num1/num2;
               
               printf("Divided: %.1f",result_2);
               break;
            case '*':
                result_1=num1 * num2;
                printf("Product : %d",result_1);
                break;
            
           
           default:
           printf("Invalid Operator");
            break;
           }
           break;
        case 2:
          printf("Enter Number");
          scanf("%d",&num1);
          printf("Do You Want to Find Out \n1.Square(s)\n2.Root(r)\nPlease Enter (s/r)");
          scanf(" %c",&comp_char);
          comp_char=tolower(comp_char);
          switch(comp_char){
            case 's':
               result_1=num1*num1;
               printf("Square : %d",result_1);
               break;
            case 'r':
               result_2=sqrt(num1);
               printf("Root : %.2f",result_2);
               break;
              
          }
          break;
        default:
          printf("Invalid Mode");
          break;





    }
    return 0;


}