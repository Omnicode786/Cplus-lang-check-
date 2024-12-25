#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 4.565;
    double y = 66;
    double z;

    z = max(x, y);
    cout << z << '\n';
    z = min(y, x);
    cout << z << '\n';
    z = pow(2, 5);
    cout << z << '\n';
    z = sqrt(81);
    cout << z << '\n';
    z = abs(-55);
    cout << z << '\n';
    z = round(x);
    cout << z << '\n';
    z = ceil(x);
    cout << z << '\n';
    z = floor(x);
    cout << z << '\n';
    // floor is alternative but will always round down where as ceil willl round up
}