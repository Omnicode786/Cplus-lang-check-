#include <iostream>

using namespace std;

int main()
{

   int num1, num2;
   cout << "Enter the value of num1:\n";
   /* << this is called insertion operator */
   cin >> num1;
   /* >> is called extraction operator */
   cout << "Enter the value of num2:\n";
   cin >> num2;
   cout << "The sum is: " << num1 + num2 << "\n";

   int num3;
   cout << "Enter the number you want multiplication table of:";
   cin >> num3;
   for (int i = 0; i <= 10; i++)
   {
      cout << num3 << "x" << i << "=" << num3 * i << "\n";
   }

   int age;
   cout << "What is your age?";
   cin >> age;
   string name;
   cout << "What is your name?";
   cin >> name;
   // dont give the space strings stop reading after space
   // to counter this we use
   getline(cin >> ws, name);
   // the >> ws is for the newline character in the age as cin function is also used there if we were to move that age factor from up to below this one thern we wouldnt have to do it

   cout << "So your name is " << name << " and you are " << age << " years old am i right?";
   string question;
   cin >> question;
   if (question == "yes")
   {
      cout << "glad to meet you";
   }
   else
   {
      cout << "Oh can you please repeat then";
   }
}