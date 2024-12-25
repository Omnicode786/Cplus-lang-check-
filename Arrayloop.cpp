#include <iostream>
#include <iomanip>

using namespace std;

int main(){
char grades[]={'A','C','B','D'};
string students[]={"Muzammil","Taha","Ahsan","Mustufa"};
for (int i = 0; i < sizeof(students)/sizeof(string); i++)
{
cout<<students[i]<<" Has the grade "<<grades[i]<<'\n';
}





}