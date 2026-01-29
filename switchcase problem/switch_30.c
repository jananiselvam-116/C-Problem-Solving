#include <stdio.h>

int main() {
    int hours;
    int type; 

    scanf("%d", &hours);
    if (hours <= 1)
        type = 1;    
    else if (hours <= 4)
        type = 2;   
    else
        type = 3;    
    switch(type) {
        case 1:
            printf("Short Interruption");
            break;
        case 2:
            printf("Medium Interruption");
            break;
        case 3:
            printf("Long Interruption");
            break;
    }

    return 0;
}
