#include <stdio.h>

int main() {
    int order, speed;
    int delivery;
    scanf("%d %d", &order, &speed);

    
    switch(speed) {
        case 1:
            delivery = 50;
            break;

        case 2: 
            if(order < 1000) {
                delivery = 100;
            } else {
                delivery = 0; 
            }
            break;

        default:
            printf("Invalid Speed Type");
            return 0;
    }

    printf("Delivery ₹%d", delivery);

    return 0;
}
