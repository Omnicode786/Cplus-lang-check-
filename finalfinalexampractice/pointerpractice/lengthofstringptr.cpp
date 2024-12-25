#include <iostream>
using namespace std;

int lengthofstrng(const char *name)
{
    int length = 0;
    const char *ptr = name;
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    return length;
}


int main()
{
    char name[] = "Muzammil";
    int length = lengthofstrng(name);
    cout << length;
    return 0;
}//