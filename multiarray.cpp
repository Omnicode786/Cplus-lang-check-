#include <iostream>

using namespace std;



int main(){

string cars[][3]={{"lambo","mustang","honda"},{"Corvette","Colarado","pina colada"},{
    "suzuki","civic","fortuner"}};
cout<<cars[0][0]<<" ";
cout<<cars[0][1]<<" ";
cout<<cars[0][2]<<" \n";
cout<<cars[1][0]<<" ";
cout<<cars[1][1]<<" ";
cout<<cars[1][2]<<" \n";
cout<<cars[2][0]<<" ";
cout<<cars[2][1]<<" ";
cout<<cars[2][2]<<" \n";
printf("\n");
int rows=sizeof(cars)/sizeof(cars[0]);
int colunms=sizeof(cars[0])/sizeof(cars[0][0]);
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < colunms; j++)
    {
        cout<<cars[i][j]<<" ";
    }
  cout<<'\n';
}


}