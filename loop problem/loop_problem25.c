#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    int original = N;
    int sum = 0;
    int temp = N;
    int digits = 0;
    for (; temp != 0; temp = temp / 10) {
        digits++;
    }
    temp = N;
    for (; temp != 0; temp = temp / 10) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 1; i <= digits; i++) {
            power *= digit;
        }

        sum += power;
    }

    if (sum == original) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
