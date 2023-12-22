#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void printCaseNumber(int floor);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int floor;
    cin >> floor;

    printCaseNumber(floor);
}

void printCaseNumber(int floor) {
    int caseNumber = pow(2, floor);
    cout << caseNumber;
}