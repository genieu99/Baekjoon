#include <iostream>
#include <algorithm>
using namespace std;

int number;
void findFraction();
void findDenominatorAndNumerator(int denominatorNumeratorSum, int tmpSum);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> number;

    findFraction();
}

void findFraction() {
    int denominatorNumeratorSum= 1, tmpSum = 0;
    
    while (number > tmpSum) {
        tmpSum += denominatorNumeratorSum;
        denominatorNumeratorSum++;
    }

    findDenominatorAndNumerator(denominatorNumeratorSum, tmpSum);
}

void findDenominatorAndNumerator(int denominatorNumeratorSum, int tmpSum) {
    int denominator, numerator, difference;

    if (denominatorNumeratorSum % 2 == 0) {
        numerator = 1;
        denominator = denominatorNumeratorSum - numerator;

        difference = tmpSum - number;
        numerator += difference;
        denominator -= difference;
    }
    else {
        denominator = 1;
        numerator = denominatorNumeratorSum - denominator;

        difference = tmpSum - number;
        numerator -= difference;
        denominator += difference;
    }
    cout << numerator << "/" << denominator;
}