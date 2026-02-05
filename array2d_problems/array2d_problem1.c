#include <stdio.h>
#include <limits.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int salary[R][C];

       for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &salary[i][j]);
        }
    }

    int max1 = INT_MIN;
    int max2 = INT_MIN;

   
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int current = salary[i][j];

            if (current > max1) {
                if (current != max1) {
                    max2 = max1;
                }
                max1 = current;
            }
            else if (current < max1 && current > max2) {
                max2 = current;
            }
        }
    }

    printf("%d", max2);

    return 0;
}
