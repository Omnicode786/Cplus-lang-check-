#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    // psuo randon not truly random but close can workd for a dice
    srand(time(NULL));
    // the srand inse is a seed

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    //% will give the final remainder you can say that this is the limit
    // right now the range of number is 0 to 5 +1 should do the trick

    // rand is random number generator
    // 0-32767

    cout << num1 << '\n';
    cout << num2 << '\n';
    cout << num3 << '\n';
}
