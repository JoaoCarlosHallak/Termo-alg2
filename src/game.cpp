#include "game.h"
#include <iostream>
#include "generators.h"
#include "utils.h"

using namespace std;


void start(){
    cout << menuGenerator();
    loadDictionary();
    string secret = secretGenerator();

    int i = 1;
    string guess;
    string feedback = "______";
    bool used[6] = {false, false, false, false, false, false};


    while(i <= 10){
        cout << i << " Round" << endl;
        cout << "Guess >> ";
        cin >> guess;
        if (!checkerGuess(guess)){
            cout << "Invalid guess! Try again." << endl;
            continue;
        }

        
        for (int k = 0; k < 6; k++) {
            if (guess[k] == secret[k]) {
                feedback[k] = 'o';
                used[k] = true;
            }
        }

        for (int k = 0; k < 6; k++) {
            if (feedback[k] == 'o')
                continue;

            for (int j = 0; j < 6; j++) {
                if (!used[j] && guess[k] == secret[j]) {
                    feedback[k] = 'x';
                    used[j] = true;
                    break;
                }
            }
        }



        cout << "Feedback: " << feedback << endl;


        if (i == 10 and feedback != "oooooo"){
            cout << "You lose! The secret was: " << secret << endl;
            break;
        } else if (feedback == "oooooo"){
            cout << "Congratulations! You've guessed the secret word: " << secret << endl;
            break;
        }



        i++;
        feedback = "______";
        bool used[6] = {false, false, false, false, false, false};


    }
}