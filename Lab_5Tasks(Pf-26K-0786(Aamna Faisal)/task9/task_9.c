//Write a program where the outer switch takes a character representing a traffic light color ('R', 'Y', 'G'). Forthe 'R' (red) and 'G' (green) cases, nest an inner switch that takes a second character representing whether apedestrian button has been pressed ('Y' for yes, 'N' for no), and prints an appropriate action message foreach combination (e.g., stop and wait, stop and cross, go, go but watch for pedestrians). The 'Y' (yellow)case does not need a nested switch.
#include <stdio.h>
#include <ctype.h>
int main(){
    char light_color,pedestrian;
    printf("Current Light Color\n1.Red(R)\n2.Yellow(Y)\n3.Green(G)\nChoose(R/Y/G) ");
    scanf(" %c",&light_color);
    light_color=toupper(light_color);
    switch ((light_color))
    {
    case 'R':
        printf("Is Pedestrian Switch Pressed \n1.Yes\n2.No\nChoose(Y/N)");
        scanf(" %c", &pedestrian);
        pedestrian=toupper(pedestrian);
        switch ((pedestrian))
        {
        case 'Y':
            printf("Stop,Pedestrian is coming");
            break;
        case 'N':
            printf("Stop and Wait");
            break;
        default:
            printf("Invalid Value For pedestrian Switch");
            break;
        }


        break;
    case 'Y':
       printf("Slow Down,Get Ready to stop");
       break;
    case 'G':
        printf("Is Pedestrian Switch Pressed \n1.Yes\n2.No\nChoose(Y/N)");
        scanf(" %c", &pedestrian);
        pedestrian=toupper(pedestrian);
        switch ((pedestrian))
        {
        case 'Y':
            printf("Go but watch for pedestrians");
            break;
        case 'N':
            printf("Go");
            break;
        default:
            printf("Invalid Value For pedestrian Switch");
            break;
        }


        break;
        
        
    
    default:
        printf("Invalid Light");
        break;
    }
}