#include <cs50.h>
#include <stdio.h>
#include <string.h>

int getmedigit(int cardnumber)
{
    else{
    return cardnumber%10 + (cardnumber/10%10);
    }
}

int evensum(string cardnumber){
    int sum =0;
    int length=strlen(cardnumber);
    for(int i=length-2; i>=0; i-=2)
    {
        sum +=getmedigit((cardnumber[i]-'0')*2);

    }
    return sum;
}
int oddsum(string cardnumber){
       int sum =0;
      int length=strlen(cardnumber);
    for(int i=length-1; i>=0; i-=2)
    {
        sum +=(cardnumber[i]-'0');

    }
    return sum;
}

void checktypecard(bool valid,int length, string cardnumber){

if(valid){


    if((length==13||length==16)&&cardnumber[0]=='4')
{
    printf("VISA\n");

}
int twodigit= ((cardnumber[0]-'0')*10)+((cardnumber[1]-'0')*1);
int fourdigit= ((cardnumber[0]-'0')*1000)+((cardnumber[1]-'0')*100)+((cardnumber[2]-'0')*10)+((cardnumber[2]-'0')*1);
if((length==16)&&((fourdigit>=2221&&fourdigit<=2720)||(twodigit>=51&&twodigit<=55))){

        printf("MASTERCARD\n");
 }



else if(length==15&&(twodigit>=34&&twodigit<=37)){

        printf("AMEX\n");

}

}
else{
    printf("INVALID\n");
}
}

int main()
{
    bool valid=false;
    string cardnumber = get_string("Number: ");
    int length = strlen(cardnumber);
int result = evensum(cardnumber)+oddsum(cardnumber);

 valid=(result%10==0);
  if(length!=13&&length!=15&&length!=16){
    valid=false;
}
checktypecard(valid,length,cardnumber);










}



