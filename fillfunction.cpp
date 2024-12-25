
#include <iostream>

using namespace std;


// fill()=fills a range of elemnets with a  specified value 
//fill(begin,end,value)



int main(){

const  int size=100;
string foods[size];
fill(foods,foods+(size/2),"Halwa puri");
fill(foods +(size/2),foods+ size,"Shahi kofte");
for (string food : foods)
{
    cout<<food<<'\n';
}



}