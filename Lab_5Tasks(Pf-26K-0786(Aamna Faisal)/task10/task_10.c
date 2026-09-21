//Write a program simulating a simple ATM menu using nested switch-case statements. The outer switcshould let the user choose an account type: '1' for Savings or '2' for Current. Inside each account type's case,use an inner switch to let the user choose a transaction: '1' for Deposit, '2' for Withdraw, or '3' for CheckBalance, and print a message describing the action performed for that specific account type and transactioncombination. Add default cases at both levels to handle invalid choice
#include <stdio.h>
int main(){
    int account_type,option;
    printf("Select Account Type \n1.Savings \n2.Current\nChoose(1-2)");
    scanf("%d",&account_type);
    switch (account_type)
    {
    case 1:
        printf("What do you want to do \n1.Deposit\n2.Withdraw\n3.Check Balance\n Choose(1-3)");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("Depositing Cash In Savings Account");
            break;
        case 2:
            printf("Withdrawing Cash From Savings Account");
            break;
        case 3:
            printf("Checking Balance in Savings Account");
            break;
        
        default:
            printf("Invalide Input For Task");
            break;
        }
        break;
    case 2:
         printf("What do you want to do \n1.Deposit\n2.Withdraw\n3.Check Balance\n Choose(1-3)");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("Depositing Cash In Current Account");
            break;
        case 2:
            printf("Withdrawing Cash From Current Account");
            break;
        case 3:
            printf("Checking Balance in Current Account");
            break;
        
        default:
            printf("Invalide Input For Task");
            break;
        }
        break;
    
    default:
        printf("Invalid Account Type");
        break;
    }
    return 0;
}