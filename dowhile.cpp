
#include <iostream>

using namespace std;

int main()
{

   // do while loop = do some block of code first then repet again if condition ids true
   int number;
   // this will not work as number is not assigned soit will default to 0
   // while (number<0)
   // {
   //    cout<<"Enter the  + number:";
   //    cin>>number;
   // }

   do
   {
      cout << "Enter the  + number:";
      cin >> number;
   } while (number < 0);

   cout << "The number  is:" << number;
}