#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    bool infinite;
   
    string s ;
    cin >> s;
    
    if (s == "yes")
    {
        int i;
        printf("going infinite");
        int one ;
     
        scanf("%d", &one);
        bool infinite = true;
        while (infinite = true)
        {
            printf("Infinite:%d \n",i);
            i++;
        }
        
    }
else {
    printf("You  saved yourself from the loop");
}
}