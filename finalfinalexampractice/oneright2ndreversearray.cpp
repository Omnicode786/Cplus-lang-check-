#include <iostream>

using namespace std;

// Always remember this in reversing make a flowchart type diagram in your head imagine the flow of the data and then 
// start writing the code I mean this should be easy for someone like you muzammil imagination goes brrr
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        b[4-i] = a [i];
    }
    for ( int i = 0; i < 5; i++)
    {
        cout <<"a["<<i<<']'<<'='<<a[i] << '\t' <<"b["<<i<<']'<<'='<<b[i]<<'\n';
    }
    
    
}