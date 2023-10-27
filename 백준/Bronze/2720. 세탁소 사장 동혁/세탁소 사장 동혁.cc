#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void calculateChange(int change);

int main() {
    int testCase, change;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> change;
        calculateChange(change);
    }
}

void calculateChange(int change) {
    int quater = 25, dime = 10, nickel = 5, penny = 1;
    int quaterNum, dimeNum, nickelNum, pennyNum;
    int rest = change;
    quaterNum = rest / quater;
    rest = rest % quater;
    dimeNum = rest / dime;
    rest = rest % dime;
    nickelNum = rest / nickel;
    rest = rest % nickel;
    pennyNum = rest / penny;

    cout << quaterNum << " " << dimeNum << " " << nickelNum << " " << pennyNum << endl;
}
