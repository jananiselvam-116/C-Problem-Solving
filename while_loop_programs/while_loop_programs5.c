#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    int s = 0;
    int c = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);

        if (a == 1) {
            s++;
        } else {
            c++;
        }

        i++;
    }

    printf("Successful: %d\n", s);
    printf("Cancelled: %d\n", c);

    if (c > s) {
        printf("Status: Risk\n");
    } else {
        printf("Status: Safe\n");
    }

    return 0;
}
