// Разработайте структуру BankAccount, которая содержит поля accountNumber,
// ownerName и balance. Напишите программу, которая позволяет пользователю
// выполнять операции со счетами, такие как пополнение баланса, снятие средств
// и вывод информации о счетах.

#include <iostream>

using namespace std;

struct BankAccount
{
    int accountNumber;
    string ownerName;
    float balance;
};

float topUp(BankAccount *account, int sum)
{
    account->balance += sum;
    return account->balance;
}

float topUp2(BankAccount account, int sum)
{
    account.balance += sum;
    return account.balance;
}

bool withdraw(BankAccount *account, int sum)
{
    if (account->balance < sum)
    {
        return false;
    }
    else
    {
        account->balance -= sum;
        return true;
    }
}

void info(BankAccount *account)
{
    cout << "Account number: " << account->accountNumber << endl;
    cout << "Owner name: " << account->ownerName << endl;
    cout << "Balance: " << account->balance << endl;
}

void withdrawInfo(BankAccount *account, int sum)
{
    bool result = withdraw(account, sum);
    if (result)
    {
        cout << "Succsess\n";
    }
    else
    {
        cout << "Error\n";
    }
}

int main()
{
    BankAccount account1 = {1, "Nikita", 10000};

    info(&account1);
    cout << "----------------------\n";

    cout << "Add 5000 s\n";
    topUp(&account1, 5000);
    info(&account1);
    cout << "----------------------\n";

    cout << "Add 5000\n";
    topUp2(account1, 5000);
    info(&account1);
    cout << "----------------------\n";

    // cout << "Withdraw 6000\n";
    // // account1.withdraw(6000);
    // withdrawInfo(&account1, 6000);
    // info(&account1);
    // cout << "----------------------\n";

    // cout << "Withdraw 10000\n";
    // // account1.withdraw(10000);
    // withdrawInfo(&account1, 10000);
    // info(&account1);

    return 0;
}