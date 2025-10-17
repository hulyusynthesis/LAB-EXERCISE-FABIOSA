#include <stdio.h>

int main()
{
    float balance = 500.00;
    int choice;
    float amount;

    do {
        printf("\n~~ATM~~\n");
        printf("[1] Balance Inquiry\n");
        printf("[2] Deposit\n");
        printf("[3] Withdraw\n");
        printf("[4] Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour current balance: P%.2f\n", balance);
                break;

            case 2:
                printf("\nEnter deposit amount: P");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful! New balance: P%.2f\n", balance);
                } else {
                    printf("Invalid amount. Deposit must be greater than 0.\n");
                }
                break;

            case 3:
                printf("\nEnter withdrawal amount: P");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid amount. Please enter a positive number.\n");
                } 
                else if (balance - amount < 100) {
                    printf("Withdrawal denied! You must maintain at least P100.00 in your account.\n");
                } 
                else {
                    balance -= amount;
                    printf("Withdrawal successful! New balance: P%.2f\n", balance);
                }
                break;

            case 4:
                printf("\nThank you for using the ATM!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
