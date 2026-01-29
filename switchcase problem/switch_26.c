#include <stdio.h>

int main() {
    int delayDays, type;
    int fine = 0;

    scanf("%d", &delayDays);

    if (delayDays <= 5)
        type = 1;
    else if (delayDays <= 10)
        type = 2;
    else
        type = 3;

    switch (type) {
        case 1:
            fine = delayDays * 50;
            break;
        case 2:
            fine = delayDays * 100;
            break;
        case 3:
            fine = delayDays * 200;
            break;
    }

    printf("₹%d", fine);
    return 0;
}
