#include "generators.h"
#include <fstream>
#include <iostream>
#include <ctime>

using namespace std;





char dictionary[50000][7];
int totalWords = 0;

void loadDictionary() {
    ifstream file("static/out.txt");

    if (!file.is_open()) {
        cout << "Failed to open file!" << endl;
        return;
    }

    while (file >> dictionary[totalWords]) {
        totalWords++;
    }

    file.close();
}

string secretGenerator() {
    srand(time(NULL));
    int randomIndex = rand() % totalWords;
    cout << "Line: " << randomIndex << endl;
    return string(dictionary[randomIndex]);
}

string menuGenerator() {
    return "========================================\n"
           "        BEM-VINDO AO JOGO TERMO\n"
           "========================================\n\n"
           "O computador escolheu uma palavra secreta\n"
           "com 6 letras.\n\n"
           "Regras do jogo:\n"
           "- Voce tem ate 10 tentativas.\n"
           "- Cada palpite deve ser uma palavra valida\n"
           "  de 6 letras do dicionario.\n"
           "- Palpites invalidos NAO contam tentativa.\n\n"
           "Feedback:\n"
           "- 'o'  -> letra correta na posicao correta\n"
           "- 'x'  -> letra correta na posicao errada\n\n"
           "Boa sorte, decifrador!\n"
           "========================================\n";
}

