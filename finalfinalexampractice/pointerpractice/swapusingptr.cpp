#include <iostream>
using namespace std;

void swap(int *x, int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main()
{
    int x = 5;
    int y = 77;
    cout << x << ',' << y << '\n';
    swap(x,y);
    cout << x << ',' << y << '\n';
    
}   