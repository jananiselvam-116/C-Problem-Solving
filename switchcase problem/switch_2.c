#include <stdio.h>
int main(){
    int amount,balance,account;
    scanf("%d %d %d",&account,&balance,&amount);
    switch(account){
        case 1:
            if(balance >= amount){
                printf("Transaction Successfull");
            }else{
                printf("Limit Exceeded");
            }
            break;
        case 2:
            if(amount <= 5000) {
                printf("Transaction Successfull");
            }else{
                printf("Limit Exceeded");
            }
            break;
    }
    return 0;
}