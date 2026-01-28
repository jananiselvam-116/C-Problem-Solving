#include <stdio.h>

int main() {
    int a, b;

    scanf("%d", &a);   
    scanf("%d", &b); 

    switch (a) {
        case 1:
            if (b >= 80)
                printf("Excellent");
            else
                printf("Not Qualified");
            break;

        case 2:
            if (b >= 60)
                printf("Good");
            else
                printf("Not Qualified");
            break;

        case 3:
            printf("Needs Improvement");
            break;
    }

    return 0;
}
