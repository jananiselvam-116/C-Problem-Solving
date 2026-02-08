#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int maxFreq = 0;
    int mostFrequent = a[0][0];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int count = 0;

            for (int x = 0; x < R; x++) {
                for (int y = 0; y < C; y++) {
                    if (a[i][j] == a[x][y]) {
                        count++;
                    }
                }
            }

            if (count > maxFreq) {
                maxFreq = count;
                mostFrequent = a[i][j];
            }
        }
    }

    printf("%d", mostFrequent);
    return 0;
}
