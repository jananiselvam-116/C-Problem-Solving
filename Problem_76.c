#include <stdio.h>

int main() {
    int choice;
    int a, b;

    scanf("%d\n", &choice);  

    switch(choice) {
        case 1:
            scanf("%d %d", &a, &b);  
            printf("Sum = %d\n", a + b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
