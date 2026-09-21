//Extend Example 2 (the country-listing program) style of thinking to a university context. Write a programwhere the outer switch selects a department using a character ('C' for Computer Science, 'E' for ElectricalEngineering, 'B' for Business). Inside each department's case, use an inner switch on a semester number (1,2, or 3) to print the name of one core course offered that semester in that department. Include a default caseat both levels for invalid input.
#include <stdio.h>
#include <ctype.h>
int main(){
    int semester;
    char dep;
    printf("Enter Department\n1.Computer Science\n2.Electrical Engineering\n3.Bussiness\nEnter Choice(C/E/B)");
    scanf(" %c",&dep);
    dep=toupper(dep);
    printf("Enter Semester");
    scanf("%d", &semester);
    switch (dep)
    {
    case 'C':
        switch (semester)
        {
        case 1:
            printf("Programming Fundamentals\n");
            break;
        case 2:
            printf("OOP\n");
            break;
        case 3:
             printf("Data Structures\n");
             break;
        default:
            printf("Invalid Semester\n");
            break;
        }
        break;
    case 'E':
        switch (semester)
        {
        case 1:
            printf("Islamic Studies\n");
            break;
        case 2:
            printf("Circuits\n");
            break;
        case 3:
             printf("Applied Physics\n");
             break;
        default:
            printf("Invalid Semester\n");
            break;
        }
        break;
    case 'B':
        switch (semester)
        {
        case 1:
            printf("Bussiness Maths\n");
            break;
        case 2:
            printf("Advanced Financing\n");
            break;
        case 3:
             printf("Economics\n");
             break;
        default:
            printf("Invalid Semester\n");
            break;
        }
        break;
       
    
    default:
        printf("Invalid Department");
        break;
    }
    return 0 ;
    
}