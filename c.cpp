#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    // constants cannot be overrided and change
    const int a = 5;
    // this cannot be overrieded
    // this becomes read only variable

    //****MANIPULATOR*****

    // 1 endl  2  (this is in iomanip library) setw() this will mean that whatever the number in bracket it will that that much space after it

    cout << "The value of a is:" << setw(100) << a << endl;

    //******Operator Precedence*****
    // konsa pehle hoga

    return 0;
}