#include <stdio.h>

int main() {
    int customerType, billAmount;
    int finalAmount;

    scanf("%d", &customerType);
    scanf("%d", &billAmount);

    switch (customerType) {
        case 1:  
            finalAmount = billAmount - (billAmount * 5 / 100);
            break;

        case 2:  
            finalAmount = billAmount - (billAmount * 15 / 100);
            break;

        default:
            finalAmount = billAmount; 
    }

    printf("Pay ₹%d", finalAmount);

    return 0;
}
