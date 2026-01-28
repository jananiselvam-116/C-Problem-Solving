#include <stdio.h>

int main() {
    int a;
    char b;
    int c = 0;

    scanf("%d", &a);
    scanf(" %c", &b);

    switch (1) {
        case 1:
            if (a == 1 && b == 'A') {
                c = 2500;
                break;
            }

        case 2:
            if (a == 1 && b == 'B') {
                c = 2000;
                break;
            }

        case 3:
            if (a == 2 && b == 'C') {
                c = 4000;
                break;
            }

        case 4:
            if (a == 2 && b == 'D') {
                c = 3000;
                break;
            }
    }

    printf("₹%d", c);
    return 0;
}
