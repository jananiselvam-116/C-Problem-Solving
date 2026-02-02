#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int marks[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    int X;
    scanf("%d", &X);

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(marks[i] == X) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
