#include <iostream>
using namespace std;

int calculateTime(char alphabet) {
    int dialTime = 2;

    for (char c : "ADGJMPTW") {
        if (alphabet < c) break;
        else if (c == 'W') {
            dialTime++;
            break;
        }
        else {
            dialTime++;
        }
    }
    return dialTime;
}

int main() {
    char alphabet;
    int minTime = 0;

    while ((alphabet = getchar()) - 0x0A) {
        minTime += calculateTime(alphabet);
    }

    cout << minTime;
}