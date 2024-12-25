#include <iostream>
#include<ctime>


using namespace std;


char getUserChoice(){

char player;
cout<<"Rock Paper Scissors Game!\n";
do
{
    cout<<"#########################\n";
cout<<"Chose one of the following\n";
cout<<"R for rock\n";
cout<<"P for Paper\n";
cout<<"S for scissors\n";
cin>>player;
} while (player!='r'&& player!='p'&&player!='s');


}

char getComputerChoice(){
srand(time(0));
int num=rand()%3+1;
switch (num)
{
case 1:
    return 'r';
    break;
case 2:
    return 'p';
    break;
case 3:
    return 's';
    break;


default:
    break;
}

}

void showChoice(char choice){

switch (choice)
{
case 'r':
    cout<<"Rock\n";
    break;
case 'p':
    cout<<"Paper\n";
    break;
case 's':
    cout<<"Scissors\n";
    break;



default:
    break;
}

}

void chooseWinner(char player,char computer){
switch (player)
{
case 'r':
    if (computer=='r')
    {
cout<<"Its a tie\n";
            break;
    }
    else if (computer=='p')
    {
        cout<<"You lose\n";
            break;
    }
    else{
        cout<<"You win\n";
    }
    
    
    break;

    case 'p':
    if (computer=='r')
    {
cout<<"You Win\n";
            break;
    }
    else if (computer=='p')
    {
        cout<<"It's a tie\n";
            break;
    }
    else{
        cout<<"You loose\n";
    }
            break;
    case 's':
    if (computer=='r')
    {
cout<<"You loose\n";
        break;
    }
    else if (computer=='p')
    {
        cout<<"You Win\n";
        break;
    }
    else{
        cout<<"It's a tie\n";
    }
    
    
    break;
    
    

default:
    break;
}


}


int main(){

char player;
char computer;

player=getUserChoice();
cout<<"Your choice: ";
showChoice(player);

computer=getComputerChoice();
cout<<"Computer Choice: ";
showChoice(computer);

chooseWinner(player,computer);
}