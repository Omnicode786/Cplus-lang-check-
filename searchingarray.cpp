#include <iostream>
#include <ctime>

using namespace std;

int searchArray(int array[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
        
     
    }
   return -1;
        // -1 in programming means something wasnt found
    
}

int StringSearchArray(string array[], int size2, string element2)
{

    for (int j = 0; j < size2; j++)
    {
        if (array[j] == element2)
        {
            return j;
        }
        
     
    }
   return -1;
        // -1 in programming means something wasnt found
    
}


int main()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};

    int size = sizeof(numbers) / sizeof(numbers[0]);
  ;
    int index;
    int myNum;
    cout << "Enter Element to search for: ";
    cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1)
    {
        cout << myNum << " is at index " << index<<'\n';
    }
    else
    {

        cout << myNum << " is not in the array\n";
    }

      cin.ignore();//this will consume the newline character since the above wwill give it


string foods[] ={"Pizza","hamburger","tikka"};
 int size2= sizeof(foods) / sizeof(foods[0]);
string element2;
cout<<"Enter the string you want to search for: ";
getline(cin,element2);
int index2;
index2= StringSearchArray(foods,size2,element2);
  if (index != -1)
    {
        cout << element2 << " is at index " << index2<<'\n';
    }
    else
    {

        cout << element2 << " is not in the array\n";
    }








}
