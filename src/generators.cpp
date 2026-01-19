#include "generators.h"
#include <string>
#include <fstream>
#include <iostream>
#include <ctime>
using namespace std;


string secretGenerator(){

    ifstream file("static/out.txt");

    if (!file.is_open()) {
        cout << "Failed to open file!" << endl;
        return "";
    }

    char line[7];
    int total = 0;

    while(file.getline(line, 7)) {
        total++;
    }
    file.clear();
    file.seekg(0);

    if (total == 0) {
        cout << "No lines found in file!" << endl;
        return "";
    }

    srand(time(NULL));
    int randomIndex = rand() % total;


    int currentIndex = 1;
    string secret = "";

    while(file.getline(line, 7)) {
        if (currentIndex == randomIndex) {
            cout << "Line selected: " << currentIndex << " String: " << line << endl;
            secret = line;
            break;
        }
        currentIndex++;
    }


    file.close();
    return secret;
}


