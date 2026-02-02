#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0, num;
    int expectedSum = n * (n + 1) / 2;

    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &num);
        sum += num;
    }

    int missing = expectedSum - sum;
    printf("%d", missing);

    return 0;
}
