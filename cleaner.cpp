#include <fstream>
#include <iostream>
using namespace std;

int main() {

    ifstream file("static/file.txt");
    ofstream out("static/out.txt");

    if (!file.is_open() || !out.is_open()) {
        cout << "Failed to open file!" << endl;
        return 1;
    }

    char line[100];

    while (file.getline(line, 100)) {

        int size = 0;

        while (line[size] != '\0') {
            size++;
        }

        if (size == 6) {
            out << line << endl;
        }
    }

    file.close();
    out.close();

    return 0;
}
