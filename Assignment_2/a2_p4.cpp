/*
 CH08-320142
 a2 p4.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string guess, random, answer;
    
    string word[15] = {"computer", "television",
        "keyboard", "magazine", "book"};
    
    for (int i = 5; i < 15; i++)
    {
        cin >> word[i];
        //get the other 10 words from the keyboard
    }
    
    srand(static_cast <unsigned int>(time(0)));
    //start the seed for choosing the random string
    
    while (guess != "quit") {
        
        string a = word[rand() % 15];
        /* choose string 'a' based on the given 15 words
         from the 'word' array of strings */
        
        random = a;
        
        //for loop to replace vowels with underscore
        for(int i=0; a[i]!='\0';i++)
        {
            switch (a[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    a[i]='_';
                    break;
                default:
                    break;
            }
        }
        
        cout << "Try to guess the word: " << a << endl;
        cin >> guess;
        if(guess == "quit") {
            break;
        }
        
        int count = 0; //for number of tries;
        while (guess != random) {
            cout << "Guess again!" << endl;
            cin >> guess;
            count++; //increase after each try
            if(guess == "quit") {
                return 1;
            }
        }
        
        if (guess == random) {
            cout << "Congratulations you guessed the word!" << endl;
        }
        cout << "Number of tries: " << count + 1 << endl << endl;
        //+1 because one of the tries is done outside the while loop
        
        cout << "Do you wanna play again? Type YES or NO!" << endl;
        
        cin >> answer;
        
        if (answer == "NO" || answer == "quit") {
            //type NO (or quit) to stop the loop
            cout << "Thanks for playing! See you next time :)" << endl;
            break;
        }
        
    }
    
    return 0;
}
