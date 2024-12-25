#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str =  "name";
    string str2 =str;
    int n = str.size();
    // if we know the size then put it directly there or else use this function or the str len one I dont know if it works for strings in particluar or not you not what lets jusst see it
   // int j = strlen(str);
   // yeah so it doesnt work for strings
    for (int i = 0; i < n; i++)
    {
            str2[n - 1 - i] = str[i];
    }
    
    cout <<"reverse: "<<str2;
}