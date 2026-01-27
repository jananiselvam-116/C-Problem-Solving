#include <stdio.h>

int main() {
    int units;
    int bill = 0;
    scanf("%d",&units);
    if(units<=50){
       bill = units*5;
    }else if(units <= 100){
       bill = 5*50+(units-50)*5;
    }else{
        bill = 5*50+5*50+(units-100)*5;
    }
    printf("Bill Amount = Rs.%d",bill);

    return 0;
}