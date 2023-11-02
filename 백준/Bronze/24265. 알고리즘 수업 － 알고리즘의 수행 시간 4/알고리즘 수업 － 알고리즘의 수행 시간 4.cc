#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

long long int calculateExecutionNumber(long long int inputNumber);
int calculateLeadingCoefficient();

int main() {
    long long int inputNumber;
    cin >> inputNumber;

    cout << calculateExecutionNumber(inputNumber) << endl;
    cout << calculateLeadingCoefficient();
}

long long int calculateExecutionNumber(long long int inputNumber) {
    long long int executionNumber;
    if (inputNumber % 2 == 1) {
        executionNumber = inputNumber * ((inputNumber - 1) / 2);
    }
    else {
        executionNumber = inputNumber * ((inputNumber - 1) / 2) + (inputNumber / 2);
    }
    return executionNumber;
}

int calculateLeadingCoefficient() {
    int leadingCoefficient = 2;
    return leadingCoefficient;
}