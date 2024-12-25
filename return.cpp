#include <iostream>
#include <cmath>
using namespace std;

double square(double length)
{

    return pow(length, 2);
}
double cube(double length)
{

    return pow(length, 3);
}

int main()
{

    double length = 5.0;
    double area = square(length);
    cout << "ARea of square is " << area << " cm^2\n";

    double volume = cube(length);
    cout << "Volume of Cube is " << volume << " cm^3\n";
}