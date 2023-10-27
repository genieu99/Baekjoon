#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void makeStarPyramid(int inputNumber);
void printUpper(int inputNumber);
void printLower(int inputNumber);
void printBlank(int blankNumber);
void printStars(int starNumber);

int main() {
    int inputNumber;
    cin >> inputNumber;
    makeStarPyramid(inputNumber);
}

void makeStarPyramid(int inputNumber) {
    printUpper(inputNumber);
    printLower(inputNumber);
}

void printUpper(int inputNumber) {
    for (int i = 1; i <= inputNumber; i++) {
        printBlank(inputNumber - i);
        printStars(i);
        cout << endl;
    }
}

void printLower(int inputNumber) {
    for (int i = inputNumber - 1; i >= 1; i--) {
        printBlank(inputNumber - i);
        printStars(i);
        cout << endl;
    }
}

void printBlank(int blankNumber) {
    for (int i = 0; i < blankNumber; i++) {
        cout << " ";
    }
}

void printStars(int starNumber) {
    for (int i = 0; i < 2 * starNumber - 1; i++) {
        cout << "*";
    }
}