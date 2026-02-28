#include <stdio.h>

float balance = 1000.00;
float amount;
int choice;

void CheckBalance();
void Deposit();
void Withdraw();

int main()
{
    printf("============WELCOME TO THE ATM SIMULATOR============\n");

    while(1)
    {
        printf("Please Select An Option\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter Your Choice");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 :
                CheckBalance();
                break;

            case 2 :
                Deposit();
                break;

            case 3 :
                Withdraw();
                break;

            case 4 :
                printf("Thank you for using the ATM simulator. Goodbye!\n");
                return 0;
            
            default :
                printf("Invalid choice. Please try again.\n");
            
        }

    }

    return 0;
}

void CheckBalance()
{
    printf("==========CHECK BALANCE===========\n");
    printf("Your current balance is: $%.2f\n", balance);    
}

void Deposit()
{
    printf("=========DEPOSIT=========\n");
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    balance += amount;
    printf("Deposit successful.\n New balance is: $%.2f\n", balance);
}

void Withdraw()
{
    printf("=========WITHDRAW=========\n");
    printf("Enter Amount To Withdraw: ");
    scanf("%f", &amount);

    if (amount > balance)
    {
        printf("Insufficient funds. Withdrawal failed.\n");
    }
    else
    {
        balance -= amount;
        printf("Withdrawal successful.\n New balance is: $%.2f\n", balance);
    }

}

