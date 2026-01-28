#include <stdio.h>

int main() {
    int planType, paymentMode;
    int cost, finalAmount;

    scanf("%d %d", &planType, &paymentMode);
    switch(planType) {
         case 1: 
            cost = 199;
            switch(paymentMode) {
                case 11:  
                    finalAmount = cost - 20;
                    break;

                case 12:  
                    finalAmount = cost - 20;
                    break;

                case 13: 
                    finalAmount = cost;
                    break;

                default: 
                    printf("Invalid Payment Mode");
                    return 0;
            }
            break;  
        case 2:
            cost = 399;

            
            switch(paymentMode) {
                case 11:  
                    finalAmount = cost - 20;
                    break;

                case 12:  
                    finalAmount = cost - 20;
                    break;

                case 13: 
                    finalAmount = cost;
                    break;

                default:  
                    printf("Invalid Payment Mode");
                    return 0;
            }
            break;  

        default:  
            printf("Invalid Plan Type");
            return 0;
    }
    printf("Pay ₹%d", finalAmount);

    return 0;
}
