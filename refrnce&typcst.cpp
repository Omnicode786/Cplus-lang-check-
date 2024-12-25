#include <iostream>

using namespace std;

int main()
{

  /* float d =34.4 this will be considered
  normal it will be float if float d = 34.4f
   without this iw will be double similarly long double e =34.4L*/

  /*REFERENCE VARIABLE*/

  float x = 455;
  float &y = x;
  /*This work ormally as well
  You're basically making a copy of x
  and calling it y. So, both
  x and y hold the same value.
   Printing x and y would give you identical results
   because y is just a duplicate of x.

   for & y
   Here, y is not a separate copy. It's
    more like a nickname for x.
    Whatever value you give to x, y
    automatically knows it because they're essentially
    the same thing. So, when you print x and y, you get identical results because they're linked together. If x changes, y changes too, and vice versa. That's the magic of references (&). They make two things act as one.


  The advantage of using references (&) lies in efficiency, avoiding unnecessary copying of data, and providing a convenient way to work with variables in certain contexts.

   */

  cout << x << endl;
  cout << y << endl;

  //*****TYPECASTING******

  int a = 45;
  cout << "The value of a is:" << a << endl;
  cout << "The value of a is:" << (float)a << endl;
  cout << "The value of a is:" << float(a) << endl;
}