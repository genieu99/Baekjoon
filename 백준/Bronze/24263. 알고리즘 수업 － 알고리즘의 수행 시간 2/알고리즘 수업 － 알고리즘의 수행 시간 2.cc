#include <iostream>
using namespace std;

int countExcution(int excution);
int getHighestOrderTerm();

int main() {
    int excution;
    cin >> excution;

    cout << countExcution(excution) <<'\n' << getHighestOrderTerm();
}

int countExcution(int excution) {
    return excution;
}

int getHighestOrderTerm() {
    return 1;
}