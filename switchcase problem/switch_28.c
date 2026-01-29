#include <stdio.h>

int main() {
    int roomType;

    scanf("%d", &roomType);

    switch (roomType) {
        case 1:
            printf("₹80000");
            break;
        case 2:
            printf("₹60000");
            break;
        case 3:
            printf("₹45000");
            break;
        default:
            printf("Invalid Room Type");
    }

    return 0;
}
