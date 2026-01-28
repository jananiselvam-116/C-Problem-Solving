#include <stdio.h>

int main() {
    int a;
    float b;

    scanf("%d", &a);
    scanf("%f", &b);

    switch (1) {
        case 1:
            if (a == 1 && b <= 1.0) {
                printf("Normal Speed");
                break;
            }

        case 2:
            if (a == 1 && b > 1.0) {
                printf("Speed Reduced");
                break;
            }

        case 3:
            if (a == 2 && b <= 2.0) {
                printf("Normal Speed");
                break;
            }

        case 4:
            if (a == 2 && b > 2.0) {
                printf("Extra Charges Applied");
                break;
            }
    }

    return 0;
}
