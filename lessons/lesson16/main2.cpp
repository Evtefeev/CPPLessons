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

    float topUp(int sum)
    {
        balance += sum;
        return balance;
    }

    bool withdraw(int sum)
    {
        if (balance < sum)
        {
            return false;
        }
        else
        {
            balance -= sum;
            return true;
        }
    }

    void info()
    {
        cout << "Account number: " << accountNumber << endl;
        cout << "Owner name: " << ownerName << endl;
        cout << "Balance: " << balance << endl;
    }

    void withdrawInfo(int sum)
    {
        bool result = withdraw(sum);
        if (result)
        {
            cout << "Succsess\n";
        }
        else
        {
            cout << "Error\n";
        }
    }
};

int main()
{
    BankAccount account1 = {1, "Nikita", 10000};

    account1.info();
    cout << "----------------------\n";

    cout << "Add 5000 s\n";
    account1.topUp(5000);
    account1.info();

    cout << "----------------------\n";

    cout << "Add 5000\n";
    account1.topUp(5000);
    account1.info();

    cout << "----------------------\n";

    cout << "Withdraw 6000\n";
    // account1.withdraw(6000);
    account1.withdrawInfo(6000);
    account1.info();

    cout << "----------------------\n";

    cout << "Withdraw 10000\n";
    // account1.withdraw(10000);
    account1.withdrawInfo(10000);
    account1.info();

     cout << "Withdraw 10000\n";
    // account1.withdraw(10000);
    account1.withdrawInfo(10000);
    account1.info();


    return 0;
}