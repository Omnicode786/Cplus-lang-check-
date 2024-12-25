#include <iostream>
#include <iomanip>

using namespace std;

void showBalance(double balance)
{

    cout << "Your Balance is:" << setprecision(2) << fixed << balance << "$\n";
}
double deposit()
{
    double amount = 0;
    cout << "Enter amount to deposit:";
    cin >> amount;
    if (amount > 0)
    {

        return amount;
    }
    else
    {
        cout << "That's not a valid amount\n";
        return 0;
    }
}
double withdraw(double balance)
{
    double amount = 0;
    cout << "Enter amount to be withdrawn:";
    cin >> amount;
    if (amount > balance)
    {
        cout << "Insuficient balance\n";
    }
    else if (amount < 0)
    {
        cout << "Enter valid amount!\n";

        return 0;
    }
    else
    {
        return amount;
    }
    return 0;
}

int main()
{
    double balance = 0;
    int choice = 0;
    do
    {
        cout << "####################\n";
        cout << "Enter Your Choice:\n";
        cout << "1.Show Balance\n";
        cout << "2.Deposit Money\n";
        cout << "3.Withdraw Money\n";
        cout << "4.Exit\n";
        cin >> choice;

        cin.clear();
        fflush(stdin);
        // this will prevent input buffer not go to infinite loops

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            cout << "Thanks for Visiting";
            break;
        default:
            cout << "Invalid response\n";
            break;
        }
    } while (choice != 4);
    return 0;
}
