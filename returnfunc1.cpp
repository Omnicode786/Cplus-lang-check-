#include <iostream>

using namespace std;

string concatstring(string string1, string string2)
{

    return string1 + " " + string2;
}

int main()
{

    string firstname = "Muzammil";
    string secondneme = "Alam";
    string fullname = concatstring(firstname, secondneme);
    cout << "HEllo " << fullname;
}
