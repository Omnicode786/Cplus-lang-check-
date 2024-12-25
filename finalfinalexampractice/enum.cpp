#include <iostream>

using namespace std;

enum week {sun,mon,tue, wed,thu,fri,sat};
// bhai iski mjhe need smjh ni ayi ata tha mjhe to krlia kher thora bhot smh aya he like
// I mean you could use them in a place where you know like all the possible values such as in the case of names of days etc
int main()
{
    int diff = thu - mon;
    cout << "There are " << diff << " no of days b/w thu and mon";
}