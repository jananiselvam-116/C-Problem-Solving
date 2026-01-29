#include <stdio.h>

int main() {
    int callType, minutes, charge;

    scanf("%d", &callType);
    scanf("%d", &minutes);

    switch (callType) {
        case 1:
            charge = minutes * 1;
            break;
        case 2:
            charge = minutes * 3;
            break;
        case 3:
            charge = minutes * 10;
            break;
        default:
            printf("Invalid Call Type");
            return 0;
    }

    printf("₹%d", charge);
    return 0;
}
