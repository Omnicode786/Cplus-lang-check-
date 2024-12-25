#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
#include <windows.h>
#include <graphics.h>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdio.h>
#include<cstdlib>
#include <limits.h>
#include <limits>
#include <chrono>
#include <thread>
using namespace std ;




// Main
      int main()  {

    int choice, delay=10;
    while (true) {
        system("COLOR A6");
        cout << "*************WELCOME TO EDUCATIONAL SOFTWARE STUDENTS OF NEDUET**************"<<endl;
        Sleep(1000);
       system("COLOR BC");
        cout<<"------INTRODUCTION------"<<endl;
        cout<<" Our task is to develop an educational software for elementary school students which should focus on making learning fun and engaging students through various interactive activities"<<endl;
        Sleep(1000);

        cout<<"---------------THE SOFTWARE CONTAINS THE FOLLOWING FOUR MAIN CONTENTS---------------"<<endl;
        Sleep(1000);

        cout<<" -----------1.PUZZLE COMPONENT----------"<<endl;
        cout<< " Contains a variety of age-appropriate puzzles, such as jigsaw puzzles or pattern recognition games, to enhance problem-solving skills."<<endl;
        Sleep(1000);

        cout<<"----------- 2.MATHEMATICS COMPONENT-----------"<<endl;
        cout<<" Contains interactive math exercises and quizzes covering basic arithmetic, numbers, and simple equations to reinforce fundamental math concepts."<<endl;
        Sleep(1000);

        cout<<" -------------3.GRAPHIC GAMES COMPONENT-------------"<<endl;
        cout<<"A visually appealing and interactive game to promote creativity and coordination, fostering an enjoyable learning experience."<<endl;
        Sleep(1000);

        cout<<"----------------- 4.GEOGRAPHY INFORMATION COMPONENT-------------"<<endl;
        cout<<"Providing an engaging content with facts, and quizzes to educate students about world geography, enhancing their knowledge of countries, capitals, and landmarks."<<endl;
        Sleep(1000);

        cout << " If you want to quit please select EXIT"<<endl;
        cout<<"------5. EXIT---------"<<endl;
        Sleep(1000);

        cout << "Please select an option from the contents mentioned above :"<<endl;
        cout << " Enter your choice: "<<endl;
        cin >> choice;

        system("cls");

        switch (choice) {
        case 1:
        	{
        	cout<<"-------HERE IS A GUESSING GAME---------"	<<endl;
        	Sleep(1000);
        	cout<<"TRY YOUR LUCK AND TRY TO GUESS THE NUBER AS SOON AS POSSIBLE"<<endl;
        	Sleep(1000);

        	int x,y,z=0;
            cout<<"Player 1: plz avoid looking at the screen";
            cout<<"\nplayer 2: enter the number in range 0-1000 to be guessed by player 1 ";
            cin>>x;
            system("cls");
            if(x<=10)
            system("cls");
            do
           {
           cout<<"\nplayer 2:make your guess.press 0 to concede defeat :";
           cin>>y;
            z++;
            if(y>x)
           {
            cout<<"\nnumber is high";
            }
        if(y<x)
            {
            cout<<"\nnumber is low";
            }
            }
          while(y!=x);
         cout<<"\ncongratulations";
          cout<<"\nyou made "<<z<<" attempts to guess it correctly";
			}

            break;



		case 2:
       {
	  int score = 0;
        cout<<"HERE IS A GAME IN WHICH U HAVE TO FIND THE MISSING ALPHABET "<<endl;
        Sleep(1000);
        cout << "FIND THE MISSING ALPHABET"<<endl;
        Sleep(1000);

    // Question 1
    char a1;
    cout << "1. lap_op : ";
    cin >> a1;
    if (a1 == 't') {
        cout << "Correct!\n";
        ++score;
    } else {
        cout << "Incorrect. The correct alphabet is 't'.\n";
    }

    // Question 2
    char a2;
    cout << "2. ba_ket: ";
    cin >> a2;
    if (a2 == 's') {
        cout << "Correct!\n";
        ++score;
    } else {
        cout << "Incorrect. The correct alphabet is 's'.\n";
    }
 // Question 3
    char a3;
    cout << "3. s_avenger: ";
    cin >> a3;
    if (a3 == 'e') {
        cout << "Correct!\n";
        ++score;
    } else {
        cout << "Incorrect. The correct alphabet is 'e'.\n";
        }

    // Question 4
    char a4;
    cout << "4. m_ximize: ";
    cin >> a4;
    if (a4 == 'a') {
        cout << "Correct!\n";
        ++score;
    } else {
        cout << "Incorrect. The correct alphabet is 'a'.\n";
    }
 // Question 5
    char a5;
    cout << "5. _alibrate: ";
    cin >> a5;
    if (a5 == 'c') {
        cout << "Correct!\n";
        ++score;
    } else {
        cout << "Incorrect. The correct alphabet is 'c'.\n";
    }

    cout << "Game Over!\n";
    cout << "Your total score is: " << score << " out of 5.\n";
	}
        break;

     /* case 3 :
		{int gd = DETECT,gm,key_dir,foodX,foodY,snakeX[200],snakeY[200];
    
    initgraph(&gd,&gm,(char*)"");

    //initialization

    int delaytime = 200;
    int food = 0;//to count the number of food eaten by he snake
    int body = 500;//to check the body of snake
    int p_dir = 1; //to check the direction in which snake is moving
    int length = 1;
    bool game = true;//to control loop and became false at certain condition

    //initializing the array for snake
    for(int i = 0;i < 200; i++){
        snakeX [i] = 0;
        snakeY [i] = 0;

    }
    //to display snake
    snakeX [0] = 200, snakeY[0] = 200;
    foodX=200 , foodY=200;
    key_dir = 1;


    //drawing game panel
    while(game){
        setfillstyle(SOLID_FILL,GREEN);
         bar(0,0,630,470);//setting boundaries //630 is wide and 470 is length
         setfillstyle(SOLID_FILL,MAGENTA);//color of boundary
         bar(0,0,630,10);
         bar(0,0,10,470);
         bar(0,470,630,460);
          bar(620,10,630,470);
         
    
         setfillstyle(SOLID_FILL,BLACK);//COLOR OF FOOD
    
          //DISPLAYING FOOD AND AS SOON AS IT IS CONSUMED IT CHANGES THE POSITION
         if(snakeX[0] == foodX  && snakeY[0] == foodY)//snake has eaten food
            {
           length = length + 1;
           food = food + 1;
            delaytime =  delaytime -2;
            
            bar(foodX,foodY,foodX +10 ,foodY + 10);//adding 10 bcz we have to place the food in 10/10 box
            
            //to display the food  randomly we need a loop
        
        do{
        foodX = (10 + rand() % 600);    //rand is present in time library + its x coordinates is 600 and the food fits  in the screen properly
		foodY = (10 + rand() % 450);	// its y coordinates is 450 and the food fits  in the screen properly
		}while(getpixel(foodX,foodY) != 0 && foodX > 10 && foodY > 10);//means its displays clearly the food
		
            //we have to set the coordinates of food and snake in a way that the both donot overlap
            
            foodX = (foodX / 10 )*10 ;
             foodY = (foodY / 10 )*10 ;
              // if the random function gives the same value for either x or y
             if(foodX == 10){
             	foodX = rand() % 10 +5;}
             	else if(foodY == 10){
             	foodY=rand() % 10 +5;
             	foodY= foodY * 10;
			 }  
        }
     bar(foodX,foodY,foodX + 10,foodY +10);
     
     
    //TO DISPLAY THE SNAKE
    setfillstyle(SOLID_FILL,YELLOW);
    
    //NOW USER WILL PRESS THE KEY TO PLAY
    if(GetAsyncKeyState(VK_RIGHT)){
    	key_dir = 1;
	}else if(GetAsyncKeyState(VK_LEFT)){
		key_dir = 2;
	}else if(GetAsyncKeyState(VK_UP)){
		key_dir = 3;
	}else if(GetAsyncKeyState(VK_DOWN)){
		key_dir = 4;
	}else{
		key_dir= 0;
	}
	
	//based on inputs the snake will move
	
    switch(key_dir){
    	
    	case 0:
    	
    	if(p_dir == 1){
    		snakeX[0] = snakeX[0]+10;//eans if it was moving in right it contiues to move in right direction only	
		}else if(p_dir ==2){
			snakeX[0] = snakeX[0] - 10;//it continues moving to the left side
		}else if(p_dir ==3){
		snakeY[0] = snakeY[0] - 10;//it continues moving to the up side
		}else if(p_dir ==4){
			snakeY[0] = snakeY[0] + 10;//it continues moving down
		}else{
			key_dir = 0;
		}
		break;
		
		
	case 1:
	  snakeX[0] = snakeX[0] + 10;
	  p_dir = 1;
	  break;
	
	case 2:
		
	 snakeX[0] = snakeX[0] - 10;
	   p_dir = 2;
	   break;
	   
   case 3: 
       snakeY[0] = snakeY[0] - 10;
       p_dir = 3;
       break;
       
       case  4:
       snakeY[0] = snakeY[0] +10;
       p_dir = 4;
       break;	
		}
		
		//displaying the snake
		for( int i=0; i< length;i++){
			
			bar(snakeX[i], snakeY[i],snakeY[i]+10, snakeY[i]+10);
		}
		//to move body of snake
		for(int i = 199; i > 0;i--){
			snakeX[i]= snakeX[i-1];
			snakeY[i]= snakeY[i-1];
		}
	    
	    //checking wether snake is bumping into its body
		 for(int i = 2;i< length; i++){
	    	if(snakeX[0] == snakeX[i] && snakeY[0] == snakeY[i]){
	    		body = i;
	    		break;
			}
		}
		
		//bumping into the boundary
		// delay(delaytime);
		if(snakeX[0]>=615 || snakeX[0]<=5 ||snakeY[0]>=5 || snakeY[0]>=455){
			 cout<<"SNAKE BUMPED INTO WALL!!!";
			 game = false;
		}
		
		if(snakeX[0]>=snakeX[body]  && snakeY[0]>=snakeY[body]){
			 cout<<"SNAKE BUMPED INTO ITSELF!!!";
			 game = false;
		}
	}//WHILE LOOP ENDS HERE
	
	cout<<"YOUR SCORE IS :"<<food-1<<"\n";
	cout<<"game over!!!!!";
	getch();

   }
			break;


*/
        case 4:
         {

         cout<<"-------WELCOME TO GEOGRAPHY SECTION--------"<<endl;
         Sleep(1000);
         cout<<"THEREIS QIUZ WHICH ENHANCE YOUR KNOWLEGE IN GEOGRAPHY"<<endl;
         Sleep(1000);
         cout<<"YOU AE GIVEN SOME QUESTIONS IN WHICH YOU HAVE TO TELL TELL THE CORRECT CAPITAL CITY "<<endl;
  string continents[7] = {"Africa", "Antarctica", "Asia", "Europe", "North America", "Oceania", "South America"};
    string capitalCities[7] = {"Cairo", "Antarctica", "Tokyo", "Paris", "Washington D.C.", "Canberra", "Sao Paulo"};
    int randomIndex, score = 0;

    srand(time(0));
    randomIndex = rand() % 7;

    for (int i = 0; i < 7; ++i) {
        cout << "Can you tell me the capital city of " << continents[randomIndex] << "?\n";
        cout << "Enter your answer: ";
        string userAnswer;
        cin >> userAnswer;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (userAnswer == capitalCities[randomIndex]) {
            cout << "Correct! The capital city of " << continents[randomIndex] << " is " << capitalCities[randomIndex] << ".\n";
            score++;
        } else {
            cout << "Sorry, the correct answer is " << capitalCities[randomIndex] << ".\n";
        }
    }

    cout << "Press any key to continue...";
    _getch();

    cout << "Thanks for playing. Your score is " << score;
    Sleep(1000);


  }
break;

        case 5:

            exit(0);


        default:
            cout << "/n Invalid choice, please try again.";
            cout << "/n Press any key to continue...";
            _getch();
        }
}
return(0);
}












