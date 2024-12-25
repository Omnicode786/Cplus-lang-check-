#include <iostream>

using namespace std;

//nul value = a special valuie that means something has no value
// when a pointer is holding a null value
//that pointer is not pointing at anuthing(null pointer)

//nullptr=keybopard reprents a null pointer literal

//nullptrs are helpuful when deremringn if an afddress was successfulluy assigned to a pointer

// wehen using pointer be careful that your code isnt dereferencing nullptr or pointing to free memory
// this will cause undefined behaviour



int main()
{


int *pointer=nullptr;
int x=123;
pointer=&x;
if (pointer== nullptr)
{
    cout<<"Address was not assigned";
cout<<*pointer;
}
else{

cout<<"address was assigned";

cout<<*pointer;


}

pointer =&x;






}