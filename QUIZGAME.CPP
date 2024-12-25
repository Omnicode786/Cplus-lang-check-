#include <iostream>
#include <cmath>

using namespace std;


int main(){
string questions[]={"1.What year was C++ created?:","2.Who invented c++?:","3.What is the predecessor of c++?:","4/Is the earth flagt?:"};

string options[][4]={{"A.1969","1975","1985","1989"},{"A.Guido van Rossum","B.Bjarne stroustrup","John Carmack","Mark Zuckerbarg"},
{"A,C","B.c+","C--","d.B++"},{"A.yes","B.No","C.Sometimes","whats earth"}};


char answerkey[]={'C','B','A','B'};

int size = sizeof(questions)/sizeof(questions[0]);
char guess;
int score=0;

for (int i = 0; i <size; i++)
{
    cout<<"**************\n";

    cout<<questions[i]<<'\n';

for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
{
 cout<<options[i][j]<<'\n';
}

cin>>guess;
guess=toupper(guess);
if (guess==answerkey[i])
{
    cout<<"CORRECT\n";
    score++;
}
else{
cout<<"Wrong";
cout<<"Answer: "<<answerkey[i]<<'\n';
}



}

cout<<"****************************\n";
cout<<"*          RESULT          *\n";
cout<<"****************************\n";
cout<<"Correct Guesses: "<<score<<'\n';
cout<<"# of Questions: "<< size<<'\n';
cout<<"Percentage: "<<(score/(double)size)*100<<"%";




}