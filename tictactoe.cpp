#include<iostream>
#include<ctime>
using namespace std;


void drawboard(char *space){
cout<<"     |     |     "<<'\n';
cout<<"  " <<space[0] <<"  |  "<< space[1] <<"  |  "<<space[2] <<'\n';
cout<<"_____|_____|____"<<'\n';
cout<<"     |     |     "<<'\n';
cout<<"  " <<space[3] <<"  |  "<< space[4] <<"  |  "<<space[5] <<'\n';
cout<<"_____|_____|____"<<'\n';
cout<<"     |     |     "<<'\n';
cout<<"  " <<space[6] <<"  |  "<< space[7] <<"  |  "<<space[8] <<'\n';
cout<<"     |     |     "<<'\n';
cout<<'\n';
}

void playermove(char *space,char player){
int nummber;
do
{
cout<<"Enter a spot to place a marker(1-9):";
cin>>nummber;
nummber--;
if (space[nummber]==' ')
{
space[nummber]=player;
break;
}




} while (!nummber>=0||!nummber<=8);






}
void computermove(char *space,char computer){
int number;
srand(time(0));
while (true)
{
    number = rand()%9;
    if (space[number]==' ')
    {
        space[number]=computer;
        break;
    }
    
}












}

bool checkwinner(char *spaces, char player, char computer) {
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])) {
        spaces[0] == player ? cout << "You win!\n" : cout << "You lose!\n";
    } 
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])) {
        spaces[3] == player ? cout << "You win!\n" : cout << "You lose!\n";
    } 
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])) {
        spaces[6] == player ? cout << "You win!\n" : cout << "You lose!\n";
    } 
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])) {
        spaces[0] == player ? cout << "You win!\n" : cout << "You lose!\n";
    } 
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])) {
        spaces[1] == player ? cout << "You win!\n" : cout << "You lose!\n";
    } 
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])) {
        spaces[2] == player ? cout << "You win!\n" : cout << "You lose!\n";
    } 
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])) {
        spaces[0] == player ? cout << "You win!\n" : cout << "You lose!\n";
    } 
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])) {
        spaces[2] == player ? cout << "You win!\n" : cout << "You lose!\n";
    } 
    else {
        return false;
    }
    return true;
}


bool checktie(char *spaces){
for (int i = 0; i < 9; i++)
{
    if (spaces[i]==' ')
    {
        return false;
    }


}
    cout<<"Its a tie\n";
return true;




}

int main(){
char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
char player ='X';
char computer ='O';
bool running = true;


drawboard(spaces);
//when we pass array into a function it deacys uinto a pointer
while (running)
{
    playermove(spaces,player);
    drawboard(spaces);
    if (checkwinner(spaces,player,computer))
    {
        running=false;
        break;
    }

else if (checktie(spaces))
{
        running=false;
        break;
    
}

    
    computermove(spaces,computer);
drawboard(spaces);
if (checkwinner(spaces,player,computer))
    {
        running=false;
        break;
    }

else if (checktie(spaces))
{
        running=false;
        break;
    
}



}


cout<<"Thanks for playing\n";


}


