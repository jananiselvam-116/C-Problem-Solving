#include <stdio.h>

int main() {
    int connectionType, units;
    int bill = 0;

    scanf("%d %d", &connectionType, &units);

    switch (connectionType) {
        case 1: 
            if (units <= 30) {
                bill = units * 5;
            } else {
                bill = (30 * 5) + ((units - 30) * 8);
            }
            break;

        case 2: 
            bill = units * 10;
            break;

        default:
            printf("Invalid connection type");
            return 0;
    }

    printf("₹%d", bill);
    return 0;
}
