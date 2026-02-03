#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int marks[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    float average = (float)sum / n;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (marks[i] > average) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
