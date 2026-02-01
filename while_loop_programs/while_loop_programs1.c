#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;      
    int b = 0;  
    int c = 0;  
    int d = 0;  

    int i = 0;
    while (i < n) {
        scanf("%d", &a);

        if (a > 70) {
            b++;
            c++;
            if (c > d) {
                d = c;
            }
        } else {
            c = 0;
        }

        i++;
    }

    printf("Noise Violations: %d\n", b);
    printf("Longest Violation Streak: %d\n", d);

    return 0;
}
