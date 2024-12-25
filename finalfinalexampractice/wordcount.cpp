#include <iostream>
using namespace std;

enum word { yes, no };

int main() {
    string sentence;
    word w = no; 
    int count = 1;
// ok so first I thought there were no use cases of this enum thingi or wtv but I mean you could do it in other ways how I used the just the if one 
// but just go through the code dude
    cout << "Enter the sentence: ";
    getline(cin, sentence); // takes the string input from the user rem to use getline because strings doesnt work good with sapces
    for (int i = 0; sentence[i] != '\0'; i++) { // run the loop until the string sentence doesnt come to an end
        if (sentence[i] == ' ') { // if the character in that ith place has a space basically yk that a word is seperated by a space from another word  right
        // so in that sense count them words also bro you have done way harder stuff than this in scrabble bruh cs50 rem much??
            if (w == yes) {      // check if word is yes initially we know that it would be no right
            // and we also know that in order for a sentence to begin there must always not be a space  so the below else block will always ruin first
            // which becuase word is  inittialy 0 or no it would make it yes then when the word ends we would encounter a space
            // and come to this block now since the word is yes then count will be incremented and then we again set the word to no
            // indicating basically that we are no on another word and this process will continue on an on 
                count++;          
                w = no;           
            }
        } else { 
            if (w == no) {       
                w = yes;
            }
        }
    }

    cout << "The number of words in the sentence is: " << count << endl;

    return 0;
}
