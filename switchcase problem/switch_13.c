#include <stdio.h>

int main() {
    int loanType, creditScore;

    scanf("%d", &loanType);
    scanf("%d", &creditScore);

    switch (loanType) {
        case 1:   
            if (creditScore >= 700)
                printf("Approved");
            else if (creditScore >= 650)
                printf("Manual Review");
            else
                printf("Rejected");
            break;

        case 2:   
            if (creditScore >= 700)
                printf("Approved");
            else
                printf("Rejected");
            break;
    }

    return 0;
}
