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
    long long int tempNumber = inputNumber -2;
    long long int sum = 0;

    while (tempNumber > 0) {
        long long int tempSum = 0;

        tempSum = tempNumber * (tempNumber + 1) / 2;

        tempNumber--;
        sum += tempSum;
    }
    return sum;
}

int calculateLeadingCoefficient() {
    int leadingCoefficient = 3;
    return leadingCoefficient;
}