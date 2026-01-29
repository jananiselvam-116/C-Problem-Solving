#include <stdio.h>

int main() {
    int deliveryMode;

    scanf("%d", &deliveryMode);

    switch (deliveryMode) {
        case 1:
            printf("₹40");
            break;
        case 2:
            printf("₹120");
            break;
        case 3:
            printf("₹0");
            break;
        default:
            printf("Invalid Delivery Mode");
    }

    return 0;
}
