#include <stdio.h>

int main() {
    int category, age;
    int premium = 0;

    scanf("%d", &category);
    scanf("%d", &age);

    switch (category) {
        case 1:  
            if (age <= 5)
                premium = 1500;
            else
                premium = 2500;
            break;

        case 2:   
            if (age <= 5)
                premium = 4000;
            else
                premium = 6000;
            break;
    }

    printf("₹%d", premium);

    return 0;
}
