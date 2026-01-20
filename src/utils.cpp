#include <iostream>
using namespace std;


extern char dictionary[50000][7];
extern int totalWords;

bool dictionaryContains(string word){
    for (int i = 0; i < totalWords; i++){
        if (word == dictionary[i]){
            return true;
        }
    }
    return false;
}


bool checkerGuess(string guess){
    if (guess.length() != 6 or !dictionaryContains(guess)){
        return false;
    }
    return true;
}