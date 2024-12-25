#include <iostream>

namespace first
{
    int x = 3;
}
namespace second
{
    int x = 5;
}
int name()
{
    using namespace first;
    std::cout << x << "\n";
    // but if we were using "using namespace first or second or any of the name then it would be predetermined that the value is going to be used of that name space
    /*for ex if we used using namespace first then we wouldnt have to specify in the cout thing first we would just
    type x and nothing else not that now it will use the value of first x or the namespace used*/
}
int main()
{
    int x = 0;
    std::cout << x << "\n";
    // you can have same variable name but different values of that variable if you use namespace note that the name of namespace cannot be the same
    std::cout << first::x << "\n";
    //:: means scope resolution operator
    std::cout << second::x << "\n";
    name();
}