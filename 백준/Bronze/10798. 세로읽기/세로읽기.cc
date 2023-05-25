#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char letters[16][5];
void input();
void print();

int main() {
    input();
    print();
}

void input() {
    int lines = 5;
    string letter;

    for (int row = 0; row < lines; row++) {
        cin >> letter;
        for (int column = 0; column < letter.size(); column++) {
            letters[column][row] = letter[column];
        }
    }
}

void print() {
    for (int column = 0; column < 15; column++) {
        for (int row = 0; row < 5; row++) {
            if (letters[column][row] == '\0') {
                continue;
            }
            cout << letters[column][row];
        }
    }
}