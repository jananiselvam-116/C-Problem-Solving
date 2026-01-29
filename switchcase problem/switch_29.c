#include <stdio.h>

int main() {
    int vehicleType, distance;
    int fare = 0;

    scanf("%d", &vehicleType);
    scanf("%d", &distance);

    switch (vehicleType) {
        case 1:
            fare = distance * 10;
            break;
        case 2:
            fare = distance * 15;
            break;
        case 3:
            fare = distance * 20;
            break;
        default:
            printf("Invalid Vehicle Type");
            return 0;
    }

    printf("₹%d", fare);
    return 0;
}
