#include <stdio.h>

int main() {
    int a, b;
    int c = 0;

    scanf("%d", &a);   
    scanf("%d", &b);  

    switch (a) {
        case 1:   
            c = 10 * b;
            break;

        case 2:  
            c = 20 * b;
            break;

        default:  
            c = 20 * b;
    }

    printf("Parking Fee ₹%d", c);
    return 0;
}
