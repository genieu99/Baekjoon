#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

long long int calculateExecutionNumber(long long int testNumber);
long long int calculateLeadingCoefficient();

int main() {
    long long int testNumber;
    cin >> testNumber;

    cout << calculateExecutionNumber(testNumber) << endl;
    cout << calculateLeadingCoefficient();
}

long long int calculateExecutionNumber(long long int testNumber) {
    long long int executionNumber;
    executionNumber = pow(testNumber, 2);
    return executionNumber;
}

long long int calculateLeadingCoefficient() {
    int leadingCoefficient = 2;
    return leadingCoefficient;
}