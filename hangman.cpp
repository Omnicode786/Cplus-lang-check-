#include <iostream>
#include <ctime>
#include <string>

using namespace std;


void hangman()
{

     cout<<"\t \t \t \t     'H A N G M A N'"<<endl;
     cout<<"\t \t \t \t     '============='"<<endl;

     cout<<""<<endl;
     cout<<""<<endl;


    cout << "\t \t \t \t ________________________ "<< endl;
    cout << "\t \t \t \t ||        |          ||"<<endl;
    cout << "\t \t \t \t ||        O          ||"<<endl;
    cout << "\t \t \t \t ||       / \\         ||"<<endl;
    cout << "\t \t \t \t ||        |          ||"<<endl;
    cout << "\t \t \t \t ||       / \\         ||"<<endl;
    cout << "\t \t \t \t ||   ===========     ||"<<endl;

}

int checkGuess(char guess, string real_country, string& hidden_country)
{
    int matches = 0;
    int len = real_country.length();

    for (int i = 0; i < len; i++) {
    if (guess == real_country[i]) {
        hidden_country[i] = guess;
            matches++;
        }
    }

    return matches;
}

int main()
 {
    srand(time(NULL));

    string countries[] = {
        "pakistan",
        "india",
        "china",
        "iran",
        "afghanistan",
        "iraq",
        "maldives",
        "turkmenistan"
    };

    int countryIndex = rand() % 8;
    string country = countries[countryIndex];

    string hiddenCountry(country.length(), '_');

    int attempts = 5;
    string message = "You have 5 attempts left!";
hangman();
    while (attempts > 0)
        {
        
        cout << "\t \t \t \t Attempts left: " << attempts << endl;
        cout << "\t \t \t \t Hidden country:" << hiddenCountry << endl;

        char guess;
        cout << "\t \t \t \t Guess a letter: ";
        cin >> guess;

        if (checkGuess(guess, country, hiddenCountry) == 0)
        {
            attempts--;
            message = "Incorrect guess!";
        } else
        {
            message = "Correct guess!";
        }

        if (hiddenCountry == country)
        {
            hangman();
            cout << "\nYou win! The country was: " << country << endl;
            break;
        }
    }

    if (attempts == 0)
        {
        hangman();
        cout << "\nYou lose! The country was: " << country << endl;
    }
 
 
    return 0;
 }