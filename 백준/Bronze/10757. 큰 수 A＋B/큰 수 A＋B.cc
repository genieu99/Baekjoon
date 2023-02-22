#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string answer;

void makeVector(vector<int>& numberVector, string number) {
    for (int i = 0; i < number.length(); i++) {
        numberVector.push_back(number[i] - '0');  // 문자 - '0' == 숫자
    }
}

void matchDigit(vector<int>& secondNumbers, int loopSize) {
    for (int i = 0; i < loopSize; i++) {
        secondNumbers.push_back(0);
    }
}

void addDigit(vector<int>& firstNumbers, vector<int>& secondNumbers) {
    int tempSum, carry;

    for (int i = firstNumbers.size() - 1; i >= 0; i--) {
        tempSum = firstNumbers[i] + secondNumbers[i];

        if (carry == 1) {
            tempSum++;
            carry = 0;
        }

        if (tempSum > 9) {
            carry = 1;
        }
        answer += tempSum % 10 + '0';  // 숫자 + '0' == 문자
    }

    if (carry == 1) {
        answer += '1';
    }
}

void findAnswer() {
    reverse(answer.begin(), answer.end());
    cout << answer << "\n";
}

int main() {
    string first, second;
    vector<int> firstNumbers, secondNumbers;

    cin >> first >> second;

    if (first.length() < second.length()) {
        swap(first, second);
    }

    int differenceLen = first.size() - second.size();

    matchDigit(secondNumbers, differenceLen);
    makeVector(firstNumbers, first);
    makeVector(secondNumbers, second);
    addDigit(firstNumbers, secondNumbers);
    findAnswer();
}