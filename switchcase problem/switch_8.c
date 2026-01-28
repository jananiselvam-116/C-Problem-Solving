#include <stdio.h>
int main() {
    int marks, attendance;
    int category;
    scanf("%d %d", &marks, &attendance);
    if (attendance < 75) {
        category = 0;  
    } 
    else if (marks >= 75) {
        category = 1;  
    } 
    else if (marks >= 50) {
        category = 2;  
    } 
    else {
        category = 3; 
    }
    switch(category) {
        case 0:  
            printf("Fail");
            break;
        case 1:  
            printf("Distinction");
            break;
        case 2:
            printf("Pass");
            break;
        case 3:
            printf("Fail");
            break;
        default:
            printf("Invalid");
    }

    return 0;
}
