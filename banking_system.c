#include <stdio.h>
#include <stdlib.h>
int balance[20], custno[20], n;
char name[10][20];
void deposit(int cno, int amt)
{
    for (int i = 0; i < n; i++)
    {
        if (custno[i] == cno)
        {
                balance[i] = balance[i] + amt;
                printf("%d\n%s\n%d\n", custno[i], name[i], balance[i]);
        }
    }
}
void withdraw(int cno, int amt)
{
    for (int i = 0; i < n; i++)
    {
        if (custno[i] == cno)
        {
            if (balance[i] >= amt + 500)
            {
                balance[i] = balance[i] - amt;
                printf("%d\n%s\n%d", custno[i], name[i], balance[i]);
            }
            else
            {
                printf("Insufficient Balance");
            }
        }
    }
}
int main()
{
    int customerno, amount;
    printf("Enter number of customers:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter customer number:");
        scanf("%d", &custno[i]);
        printf("Enter customer name:");
        scanf("%s", &name[i]);
        printf("Enter the balance:");
        scanf("%d", &balance[i]);
    }
    printf("Enter your customer number for which amount is withdrawn or deposited:");
    scanf("%d", &customerno);
    printf("Enter the amount to be withdrawn or deposited:");
    scanf("%d", &amount);
    int choice;
    printf("Enter 1 for Withdraw and 2 for Deposit :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    withdraw(customerno,amount);
    break;
    case 2:
    deposit(customerno,amount);
    break;
    }
    return 0;
}