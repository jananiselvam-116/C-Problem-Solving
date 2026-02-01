#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    int n;
    scanf("%d", &n);

    int a;
    int t = 0;
    int r = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);

        if (t < m) {
            if (t + a <= m) {
                t = t + a;
            } else {
                r = r + (t + a - m);
                t = m;
            }
        } else {
            r = r + a;
        }

        i++;
    }

    printf("Treated Patients: %d\n", t);
    printf("Rejected Patients: %d\n", r);

    return 0;
}
