/*reserved keyword used to create
an additional name (alias)
for another data type new indentifier for an existing type helps with readability and reduces typos*/
/*Use when there is clear benefir
Replaced with using (work bettwe w templates)*/

#include <iostream>

#include <vector>

using namespace std;

// typedef std::vector<std::pair<std::string, int>> pairlist_t; // t here means type used to identify nto necessary)

// typedef std::string text_t;
using text_t = std::string;

// typedef int number_t;
using number_t = int;

int main()
{
    text_t firstname = "Muzammil Alam";
    cout << "My name is " << firstname << '\n';

    number_t age = 22;
    cout << age;
}
