#include <iostream>

using namespace std;

// a function name canbe same uin 2 but it should have different parameters
// function name and its parameter is knowsn as function signature

void bakePizza()
{
    cout << "Here is your Pizza!\n";
}

void bakePizza(string topping1)
{
    cout << "Here is your " << topping1 << " Pizza!\n";
}
void bakePizza(string topping1, string topping2)
{
    cout << "Here is your " << topping1 << ' ' << topping2 << " Pizza!\n";
}
int main()
{
    string tops = "Chiken";
    bakePizza();
    bakePizza(tops);
    bakePizza(tops, "Mushroom");
}