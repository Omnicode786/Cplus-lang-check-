#include <iostream>

using namespace std;

int main()
{
    const char *name = "Muzammil";
    char const *ptr = name;
    int length = 0;
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }    
    cout << "The length of the string is: " << length << endl;
}