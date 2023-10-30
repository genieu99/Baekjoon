#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void calculateAndPrintDots(int processNumber);

int main() {
    int processNumber;
    cin >> processNumber;

    calculateAndPrintDots(processNumber);
}

void calculateAndPrintDots(int processNumber) {
    int dots, newDots, totalDots;

    newDots = pow(2, processNumber - 1);
    dots = newDots + 1;

    totalDots = pow(dots + newDots, 2);

    cout << totalDots;
}