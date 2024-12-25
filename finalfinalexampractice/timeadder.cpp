#include <iostream>

using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter the time in hours:minutes:seconds format:";
    cin >>t1.hours; cout <<':'; cin.ignore(); cin >> t1.minutes; cin.ignore(); cout <<':';  cin >> t1.seconds;
    cout << "Enter the 2nd time in hours:minutes:seconds format:";
    cin >>t2.hours; cin.ignore(); cout <<':'; cin >> t2.minutes; cin.ignore(); cout <<':'; cin >> t2.seconds;
    int totalseconds1 = (t1.hours*3600) + (t1.minutes*60) + t1.seconds;
    int totalseconds2 = (t2.hours*3600) + (t2.minutes*60) + t2.seconds;
    int totaltime = totalseconds1 + totalseconds2;
    t3.hours = totaltime / 3600;
    int x = totaltime % 3600;
    t3.minutes = x / 60;
    t3.seconds = x % 60;
    cout << t3.hours <<':'<<t3.minutes<<':'<<t3.seconds<<'\n';


}
