#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int salary[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &salary[i][j]);
        }
    }

    int minIndex = 0;
    int minSum = 0;

    for(int j = 0; j < c; j++) {
        minSum += salary[0][j];
    }

    for(int i = 1; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++) {
            sum += salary[i][j];
        }
        if(sum < minSum) {
            minSum = sum;
            minIndex = i;
        }
    }

    printf("%d", minIndex);
    return 0;
}
