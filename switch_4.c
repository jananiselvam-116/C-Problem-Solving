#include <stdio.h>

int main() {
    int class,age;
    int fare;
    scanf("%d %d", &class,&age);
    switch(class){
        case 1:
            fare = 300;
            if(age < 12){
                fare = fare/2;
            }else if(age >= 60){
                fare = (fare*2)/3;
            }
            break;
        case 2:
            fare = 1000;
            if(age < 12){
                fare = fare/2;
            }
            break;
        default:
              printf("Invalid Numbers");
              return 0;
    }
    
    printf("Fare %d",fare);
    
    return 0;
}
