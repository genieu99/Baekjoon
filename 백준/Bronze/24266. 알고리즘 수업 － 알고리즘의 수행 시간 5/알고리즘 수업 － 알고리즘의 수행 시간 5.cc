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
    executionNumber = inputNumber * inputNumber * inputNumber;
    return executionNumber;
}

int calculateLeadingCoefficient() {
    int leadingCoefficient = 3;
    return leadingCoefficient;
}