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
        s = s + a;

        if (a > 4) {
            c++;
        }

        i++;
    }

    printf("Total Overtime: %d\n", s);
    printf("Burnout Days: %d\n", c);

    return 0;
}
