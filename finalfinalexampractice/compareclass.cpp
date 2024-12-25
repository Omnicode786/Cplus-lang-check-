#include <iostream>

using namespace std;
class kid
{
public:
    int initialcoins = 0;
    int coins = 0;
    int usedtotal = 0;
    void takeinput(int cointaken)
    {
        coins = cointaken;
        initialcoins = coins;
    }
    void coinsused(int used)
    {
        if (used > coins)
        {
            cout << "You can't use more coins than you have! Try again.\n";
            return;
        }
        coins -= used;
        usedtotal += used;
    }
    void showfinalcoins()
    {
        cout << "You have " << coins << " left" << endl;
    }
    void reward()
    {
        if (coins == initialcoins)
        {
            cout << "Congrats you saved all you money" << endl;
        }
        else if (usedtotal <= (initialcoins / 2))
        {
            cout << "congrats you used less money then half your inital value" << '\n';
        }
        else if (coins > 1)
        {
            cout << "Try to save money bro" << endl;
        }

        else
        {
            cout << "You used all of your money very bad" << endl;
        }
    }
};

int main()
{
    kid k1;
    int money;
    cout << "Enter the amount of money you wil give  your code: ";
    cin >> money;
    k1.takeinput(money);
    int used;
    int spendno;
    cout << "Hey kid how many times are you going to spend your money: ";
    do
    {
        cin >> spendno;
    } while (spendno < 0);

    for (int i = 1; i <= spendno; i++)
    {
        cout << "Enter the amount you are going to use kid: ";
        cin >> used;
        k1.coinsused(used);
        k1.showfinalcoins();
    }
    k1.reward();
}