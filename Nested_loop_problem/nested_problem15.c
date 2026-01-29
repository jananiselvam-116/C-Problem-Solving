#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for (i = 5; i >= 1; i--) {
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
