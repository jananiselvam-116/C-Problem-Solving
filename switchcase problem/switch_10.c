#include <stdio.h>

int main() {
    int code, experience;
    int salary = 0;
    int bonus = 0;
    scanf("%d %d", &code, &experience);
    switch(code) {
        case 1: 
            salary = 50000;
            break;
        case 2: 
            salary = 35000;
            break;
        default:
            printf("Invalid Code");
            return 0;
    }
    if(experience >= 3) {
        bonus = experience * 5000;
    }

    salary += bonus;
    printf("Salary ₹%d", salary);

    return 0;
}
