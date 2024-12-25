#include <iostream>

using namespace std;

int main()
{

    int number;
    cout << "Enter a number:";
    cin >> number;
    number % 2 == 0 ? cout << "Even\n" : cout << "Odd\n";
    bool hungry = true;
    hungry ? cout << "Take some food\n" : cout << "shu if youre not hungry then dont come here\n";
    bool buy = false;
    cout << (buy ? "Come We have lods of mobile" : "oh too sad youre really missingout on the new stuff");
}